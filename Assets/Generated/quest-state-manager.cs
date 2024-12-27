using UnityEngine;
using UnityEngine.SceneManagement;

public class QuestStateManager : MonoBehaviour
{
    [Header("GameObject Tags")]
    [Tooltip("Tag der Osman Group in der Szene")]
    public string osmanGroupTag = "OsmanGroup";
    [Tooltip("Tag des Camel Quest Triggers in der Szene")]
    public string camelQuestTriggerTag = "CamelQuestTrigger";
    [Tooltip("Tag der Market Blockade Objekte in der Szene")]
    public string marketBlockadeTag = "MarketBlockade";
    [Tooltip("Tag des Dialog Managers in der Szene")]
    public string dialogManagerTag = "DialogManager";

    [Header("Quest Status")]
    [SerializeField]
    [Tooltip("Wurde das Willkommensgespräch bereits gehört?")]
    private bool welcomeDialogCompleted = false;
    [SerializeField]
    [Tooltip("Wurde die Kamel-Quest von Osman abgeschlossen?")]
    private bool camelQuestCompleted = false;
    [SerializeField]
    [Tooltip("Wurde das Pferderennen von Halid gewonnen?")]
    private bool horseRaceCompleted = false;

    // Private Referenzen die zur Laufzeit gefunden werden
    private GameObject osmanGroup;
    private GameObject camelQuestTrigger;
    private GameObject[] marketBlockade;
    private DialogManager dialogManager;

    // Singleton Pattern
    private static QuestStateManager instance;
    public static QuestStateManager Instance
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
    }

    private void OnEnable()
    {
        // Registriere für Scene Load Events
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void OnDisable()
    {
        // Cleanup
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "MainScene")
        {
            // Suche alle benötigten Referenzen wenn die Hauptszene geladen wird
            FindSceneReferences();
            // Update den Spielstatus
            UpdateGameState();
        }
    }

    private void FindSceneReferences()
    {
        // Finde Osman Group
        osmanGroup = GameObject.FindGameObjectWithTag(osmanGroupTag);
        if (osmanGroup == null) Debug.LogWarning("Osman Group not found in scene!");

        // Finde Camel Quest Trigger
        camelQuestTrigger = GameObject.FindGameObjectWithTag(camelQuestTriggerTag);
        if (camelQuestTrigger == null) Debug.LogWarning("Camel Quest Trigger not found in scene!");

        // Finde Market Blockade
        marketBlockade = GameObject.FindGameObjectsWithTag(marketBlockadeTag);
        if (marketBlockade.Length == 0) Debug.LogWarning("No Market Blockade objects found in scene!");

        // Finde Dialog Manager
        GameObject dialogManagerObj = GameObject.FindGameObjectWithTag(dialogManagerTag);
        if (dialogManagerObj != null)
        {
            dialogManager = dialogManagerObj.GetComponent<DialogManager>();
        }
        if (dialogManager == null) Debug.LogWarning("Dialog Manager not found in scene!");
    }

    // Aktualisiert den Spielzustand basierend auf Quest-Status
    private void UpdateGameState()
    {
        Debug.Log($"Updating game state - Camel: {camelQuestCompleted}, Horse: {horseRaceCompleted}");

        // Update Camel Quest Status
        if (camelQuestCompleted)
        {
            if (osmanGroup != null)
            {
                osmanGroup.SetActive(false);
                Debug.Log("Deactivated Osman Group");
            }
            if (camelQuestTrigger != null)
            {
                camelQuestTrigger.SetActive(false);
                Debug.Log("Deactivated Camel Quest Trigger");
            }
        }

        // Update Market Blockade
        if (AreAllQuestsCompleted())
        {
            foreach (var blockade in marketBlockade)
            {
                if (blockade != null)
                {
                    blockade.SetActive(false);
                    Debug.Log("Deactivated Market Blockade");
                }
            }
        }
    }

    // Stellt einen gespeicherten Zustand wieder her
    public void RestoreState(bool camelQuest, bool horseRace, bool welcomeDialog)
    {
        // Setze alle Quest-Stati
        camelQuestCompleted = camelQuest;
        horseRaceCompleted = horseRace;
        welcomeDialogCompleted = welcomeDialog;

        // Aktualisiere die Szene basierend auf den Quests
        if (camelQuestCompleted)
        {
            // Deaktiviere Osman und seine Karawane
            if (osmanGroup != null)
                osmanGroup.SetActive(false);

            if (camelQuestTrigger != null)
                camelQuestTrigger.SetActive(false);
        }

        // Wenn beide Quests abgeschlossen sind, entferne die Markt-Blockade
        if (camelQuestCompleted && horseRaceCompleted)
        {
            foreach (var blockade in marketBlockade)
            {
                if (blockade != null)
                    blockade.SetActive(false);
            }
        }

        Debug.Log($"Quest states restored - Camel: {camelQuest}, Horse: {horseRace}, Welcome: {welcomeDialog}");
    }

    #region Public Quest Methods

    // Willkommensdialog
    public void SetWelcomeDialogComplete()
    {
        welcomeDialogCompleted = true;
        Debug.Log("Welcome Dialog marked as completed");
    }

    public bool HasHeardWelcomeDialog()
    {
        return welcomeDialogCompleted;
    }

    // Kamel Quest
    public void CompleteCamelQuest()
    {
        camelQuestCompleted = true;
        Debug.Log("Camel Quest marked as completed");
        UpdateGameState();
    }

    public bool IsCamelQuestCompleted()
    {
        return camelQuestCompleted;
    }

    // Pferde Quest
    public void CompleteHorseRace()
    {
        horseRaceCompleted = true;
        Debug.Log("Horse Race marked as completed");
        UpdateGameState();
    }

    public bool IsHorseRaceCompleted()
    {
        return horseRaceCompleted;
    }

    // Allgemeiner Status
    public bool AreAllQuestsCompleted()
    {
        return camelQuestCompleted && horseRaceCompleted;
    }

    #endregion
}