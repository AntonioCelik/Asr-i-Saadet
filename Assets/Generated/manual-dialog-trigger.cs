using UnityEngine;
using TMPro;

public class ManualDialogTrigger : MonoBehaviour
{
    public DialogManager dialogManager;
    public string dialogGroupID = "Ali_Welcome";
    public TextMeshProUGUI statusText;  // Optional für Status-Anzeige
    
    private bool hasTriggered = false;

    void Update()
    {
        // Prüfe ob der Welcome-Dialog schon gehört wurde
        if (!hasTriggered &&
            Time.timeSinceLevelLoad > 2f &&
            QuestStateManager.Instance != null &&
            !QuestStateManager.Instance.HasHeardWelcomeDialog())
        {
            hasTriggered = true;

            if (statusText != null)
                statusText.text = "Triggering Dialog...";

            dialogManager.StartDialogGroup(dialogGroupID);

            // Markiere den Dialog als gehört
            QuestStateManager.Instance.SetWelcomeDialogComplete();
        }
    }
}
