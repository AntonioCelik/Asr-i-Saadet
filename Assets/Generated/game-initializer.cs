using UnityEngine;
using UnityEngine.SceneManagement;

public class GameInitializer : MonoBehaviour
{
    [Header("Scene Names")]
    [Tooltip("Name der Menü-Szene")]
    public string menuSceneName = "MainMenu";

    [Header("Manager Prefabs")]
    [Tooltip("Prefab des LocalizationManagers aus dem Resources Ordner")]
    public string localizationManagerPath = "Managers/LocalizationManager";
    [Tooltip("Prefab des SceneTransitionManagers aus dem Resources Ordner")]
    public string sceneTransitionManagerPath = "Managers/SceneTransitionManager";
    [Tooltip("Prefab des QuestStateManagers aus dem Resources Ordner")]
    public string questStateManagerPath = "Managers/QuestStateManager";

    void Start()
    {
        Debug.Log("GameInitializer: Starting initialization");

        // 1. LocalizationManager initialisieren
        if (LocalizationManager.Instance == null)
        {
            Debug.Log("GameInitializer: Loading LocalizationManager prefab");
            GameObject localizationManagerPrefab = Resources.Load<GameObject>(localizationManagerPath);
            if (localizationManagerPrefab != null)
            {
                Instantiate(localizationManagerPrefab);
            }
            else
            {
                Debug.LogError("GameInitializer: LocalizationManager prefab not found!");
            }
        }

        // 2. SceneTransitionManager initialisieren
        if (SceneTransitionManager.Instance == null)
        {
            Debug.Log("GameInitializer: Loading SceneTransitionManager prefab");
            GameObject sceneTransitionManagerPrefab = Resources.Load<GameObject>(sceneTransitionManagerPath);
            if (sceneTransitionManagerPrefab != null)
            {
                Instantiate(sceneTransitionManagerPrefab);
            }
            else
            {
                Debug.LogError("GameInitializer: SceneTransitionManager prefab not found!");
            }
        }

        // 3. QuestStateManager initialisieren
        if (QuestStateManager.Instance == null)
        {
            Debug.Log("GameInitializer: Loading QuestStateManager prefab");
            GameObject questStateManagerPrefab = Resources.Load<GameObject>(questStateManagerPath);
            if (questStateManagerPrefab != null)
            {
                Instantiate(questStateManagerPrefab);
            }
            else
            {
                Debug.LogError("GameInitializer: QuestStateManager prefab not found!");
            }
        }

        // 4. Zum Menü wechseln
        Debug.Log("GameInitializer: Loading menu scene: " + menuSceneName);
        SceneManager.LoadSceneAsync(menuSceneName);
    }
}