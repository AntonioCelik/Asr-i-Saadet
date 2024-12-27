using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class SceneTransitionManager : MonoBehaviour
{
    [Header("Scene Names")]
    [Tooltip("Name der Hauptszene")]
    public string mainSceneName = "MainScene";
    [Tooltip("Name der Rennszene")]
    public string raceSceneName = "RaceScene";

    [Header("Spawn Settings")]
    [Tooltip("Offset für die Spawn-Höhe")]
    public float spawnHeightOffset = 0.1f;

    // Speichert den kompletten Spielzustand
    private GameState gameState;
    private bool isTransitioning = false;

    // Singleton Pattern
    private static SceneTransitionManager instance;
    public static SceneTransitionManager Instance
    {
        get { return instance; }
    }

    private void Awake()
    {
        // Singleton Setup
        if (instance != null && instance != this)
        {
            Destroy(this.gameObject);
            return;
        }

        instance = this;
        DontDestroyOnLoad(this.gameObject);

        // Initialisiere GameState hier stattdessen
        gameState = new GameState();
        gameState.currentScene = mainSceneName;
    }

    // Wird aufgerufen wenn der Spieler das Pferderennen startet
    public void StartRace(Transform playerTransform)
    {
        if (isTransitioning) return;

        Debug.Log($"Saving player position: {playerTransform.position}");

        // Speichere aktuellen Spielzustand
        SaveCurrentGameState(playerTransform);

        // Lade Rennszene
        StartCoroutine(TransitionToScene(raceSceneName));
    }

    // Wird aufgerufen wenn das Rennen beendet ist
    public void EndRace()
    {
        if (isTransitioning) return;

        // Lade Hauptszene und stelle den vorherigen Zustand wieder her
        StartCoroutine(TransitionToScene(mainSceneName));
    }

    // Speichert den aktuellen Spielzustand
    private void SaveCurrentGameState(Transform playerTransform)
    {
        VRDebugLogger.Instance.LogInfo($"Saving player pos: {playerTransform.position}");

        // Speichere Position und Rotation
        gameState.playerPosition = playerTransform.position;
        gameState.playerRotation = playerTransform.rotation;

        // Speichere Quest-Status vom QuestStateManager
        if (QuestStateManager.Instance != null)
        {
            VRDebugLogger.Instance.LogInfo($"Saving quest states - Horse: {QuestStateManager.Instance.IsHorseRaceCompleted()}");
            gameState.camelQuestCompleted = QuestStateManager.Instance.IsCamelQuestCompleted();
            gameState.horseRaceCompleted = QuestStateManager.Instance.IsHorseRaceCompleted();
            gameState.welcomeDialogCompleted = QuestStateManager.Instance.HasHeardWelcomeDialog();
        }
    }

    // Handled den Szenenübergang mit Fade-Effekt
    private IEnumerator TransitionToScene(string sceneName)
    {
        isTransitioning = true;

        // Fade Out
        if (VRFadeManager.Instance != null)
        {
            yield return StartCoroutine(VRFadeManager.Instance.FadeOut());
        }

        // Speichere neue Szene im State
        gameState.currentScene = sceneName;

        // Lade neue Szene
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName);
        while (!asyncLoad.isDone)
        {
            yield return null;
        }

        // Stelle Spielzustand wieder her wenn wir zur Hauptszene zurückkehren
        if (sceneName == mainSceneName)
        {
            yield return StartCoroutine(RestoreGameState());
        }

        // Fade In
        if (VRFadeManager.Instance != null)
        {
            yield return StartCoroutine(VRFadeManager.Instance.FadeIn());
        }

        isTransitioning = false;
    }

    // Stellt den gespeicherten Spielzustand wieder her
    private IEnumerator RestoreGameState()
    {
        VRDebugLogger.Instance.LogInfo("Starting RestoreGameState");
        yield return new WaitForSeconds(0.1f); // Warte kurz bis alle Objekte initialisiert sind

        // Finde Player
        var player = GameObject.FindGameObjectWithTag("Player");
        if (player != null)
        {
            VRDebugLogger.Instance.LogInfo($"Restoring player to: {gameState.playerPosition}");

            // Setze Position und Rotation
            player.transform.position = gameState.playerPosition + Vector3.up * spawnHeightOffset;
            player.transform.rotation = gameState.playerRotation;
        }

        else
        {
            VRDebugLogger.Instance.LogError("Player not found!");
        }

        // Stelle Quest-Status wieder her
        if (QuestStateManager.Instance != null)
        {
            QuestStateManager.Instance.RestoreState(
                gameState.camelQuestCompleted,
                gameState.horseRaceCompleted,
                gameState.welcomeDialogCompleted
            );
        }
    }
}