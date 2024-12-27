using UnityEngine;
using System.Collections;
using TMPro;

public class WelcomeDialogTrigger : MonoBehaviour
{
    [Tooltip("Referenz zum DialogManager")]
    public DialogManager dialogManager;

    [Tooltip("ID der Willkommens-Dialog-Gruppe")]
    public string welcomeDialogID = "hureyre_willkommen";

    [Tooltip("Verzögerung vor dem Start des Dialogs in Sekunden")]
    public float startDelay = 0.5f;

    void Start()
    {
        StartCoroutine(StartWelcomeDialog());
    }

    IEnumerator StartWelcomeDialog()
    {
        // Warte die eingestellte Zeit
        yield return new WaitForSeconds(startDelay);
        
        // Starte den Willkommensdialog
        dialogManager.StartDialogGroup(welcomeDialogID);
    }
}
