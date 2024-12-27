using UnityEngine;
using UnityEngine.Events;

public class HorseQuestGiver : MonoBehaviour
{
    [Header("Dialog Settings")]
    [Tooltip("Referenz zum DialogManager")]
    public DialogManager dialogManager;
    [Tooltip("Dialog-ID für Zubeyrs Begrüßung")]
    public string greetingDialogID = "zubeyr_hallo";
    [Tooltip("Dialog-ID für Ablehnung")]
    public string rejectDialogID = "zubeyr_reject";
    [Tooltip("Dialog-ID für Post-Quest")]
    public string postRaceDialogID = "zubeyr_finish";

    [Header("UI Elements")]
    [Tooltip("Das Panel mit den Auswahl-Buttons")]
    public GameObject choiceButtonsPanel;

    [Header("Quest Trigger")]
    [Tooltip("Der Trigger-Bereich um Zubeyr")]
    public SphereCollider dialogTriggerZone;
    [Tooltip("Der Player (wird für Trigger-Detection benötigt)")]
    public GameObject player;

    [Header("Post-Race Spawn")]
    [Tooltip("Position an der der Spieler nach dem Rennen erscheinen soll")]
    public Transform postRaceSpawnPoint;

    [Header("Events")]
    public UnityEvent onQuestAccepted;
    public UnityEvent onQuestRejected;

    // Private Variablen für Quest-Status
    private bool questOffered = false;
    private bool dialogActive = false;
    private bool questStarted = false;  // NEW: Track if quest has been started

    private void Start()
    {
        // Deaktiviere initial die UI
        if (choiceButtonsPanel != null)
            choiceButtonsPanel.SetActive(false);

        // Check if we're returning from race
        if (QuestStateManager.Instance != null && QuestStateManager.Instance.IsHorseRaceCompleted())
        {
            // Teleportiere Spieler zur Post-Race Position
            HandlePostRaceSpawn();

            // Deaktiviere den Trigger sofort
            if (dialogTriggerZone != null)
                dialogTriggerZone.enabled = false;

            // Spiele Post-Race Dialog automatisch ab
            StartCoroutine(PlayPostRaceDialog());
        }
    }

    private System.Collections.IEnumerator PlayPostRaceDialog()
    {
        yield return new WaitForSeconds(0.5f);  // Kurz warten
        VRDebugLogger.Instance.LogInfo("Playing post-race dialog");
        dialogManager.StartDialogGroup(postRaceDialogID);
    }

    private void OnTriggerEnter(Collider other)
    {
        // Prüfe ob es der Player ist UND das Rennen noch NICHT beendet wurde
        if (other.gameObject == player &&
            (QuestStateManager.Instance == null || !QuestStateManager.Instance.IsHorseRaceCompleted()))
        {
            VRDebugLogger.Instance.LogInfo("Player entered quest trigger");
            StartQuestDialog();
        }
    }

    public void StartQuestDialog()
    {
        // Wenn die Quest bereits abgeschlossen ist, nichts tun
        if (QuestStateManager.Instance != null && QuestStateManager.Instance.IsHorseRaceCompleted())
        {
            VRDebugLogger.Instance.LogInfo("Quest already completed, ignoring dialog trigger");
            return;
        }

        // Nur wenn die Quest noch nicht gestartet wurde
        if (!questStarted && !dialogActive)
        {
            questStarted = true;
            questOffered = true;
            dialogActive = true;

            VRDebugLogger.Instance.LogInfo("Starting initial quest dialog");
            dialogManager.StartDialogGroup(greetingDialogID);

            if (choiceButtonsPanel != null)
                choiceButtonsPanel.SetActive(true);
        }
    }

    public void AcceptQuest()
    {
        // Deaktiviere den Trigger und UI
        if (dialogTriggerZone != null)
            dialogTriggerZone.enabled = false;

        if (choiceButtonsPanel != null)
            choiceButtonsPanel.SetActive(false);

        dialogActive = false;

        VRDebugLogger.Instance.LogInfo("Quest accepted, starting race");
        StartRace();
        onQuestAccepted?.Invoke();
    }

    public void RejectQuest()
    {
        if (choiceButtonsPanel != null)
            choiceButtonsPanel.SetActive(false);

        questOffered = false;
        dialogActive = false;
        questStarted = false;  // Reset quest started state

        VRDebugLogger.Instance.LogInfo("Quest rejected");
        dialogManager.StartDialogGroup(rejectDialogID);
        onQuestRejected?.Invoke();
    }

    public void StartRace()
    {
        if (SceneTransitionManager.Instance != null)
        {
            VRDebugLogger.Instance.LogInfo("Transitioning to race scene");
            SceneTransitionManager.Instance.StartRace(GameObject.FindGameObjectWithTag("Player").transform);
        }
    }

    public void ResetQuest()
    {
        questOffered = false;
        dialogActive = false;
        questStarted = false;
        if (choiceButtonsPanel != null)
            choiceButtonsPanel.SetActive(false);
        if (dialogTriggerZone != null)
            dialogTriggerZone.enabled = true;

        VRDebugLogger.Instance.LogInfo("Quest state reset");
    }

    private void HandlePostRaceSpawn()
    {
        // Prüfe ob wir vom Rennen zurückkommen UND die nötigen Referenzen haben
        if (QuestStateManager.Instance != null &&
            QuestStateManager.Instance.IsHorseRaceCompleted() &&
            postRaceSpawnPoint != null &&
            player != null)
        {
            // Setze Position
            player.transform.position = postRaceSpawnPoint.position;

            // Setze Rotation und drehe um 180 Grad
            Quaternion targetRotation = postRaceSpawnPoint.rotation * Quaternion.Euler(0, 180, 0);
            player.transform.rotation = targetRotation;

            VRDebugLogger.Instance.LogInfo("Player spawned at post-race position with 180 rotation");
        }
    }
}