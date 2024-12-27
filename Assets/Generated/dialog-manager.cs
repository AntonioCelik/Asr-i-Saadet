using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;

public class DialogManager : MonoBehaviour
{
    [System.Serializable]
    public class DialogGroup
    {
        public string groupID;
        public List<DialogEntry> dialogs;
    }

    [System.Serializable]
    public class DialogEntry
    {
        public string dialogKey;          // Key für den lokalisierten Dialog
        public GameObject speakingNPC;
        public GameObject lookAtTarget;
        public UnityEvent onDialogStart;
        public UnityEvent onDialogEnd;
        [Tooltip("Wie schnell sich der NPC zum Ziel dreht")]
        public float turnSpeed = 5f;
        [Tooltip("Name des Parameters für die Sprechanimation im Animator")]
        public string talkAnimationParameter = "isTalking";

        // Hilfsvariable die im Inspector anzeigt, welcher Text das sein wird
        [TextArea]
        [Tooltip("Wird automatisch ausgefüllt - nur zur Vorschau")]
        public string previewText;
    }

    public List<DialogGroup> dialogGroups = new List<DialogGroup>();
    private AudioSource audioSource;
    private bool isPlaying = false;
    private Quaternion originalRotation;
    private Coroutine currentLookRoutine;

    void Start()
    {
        // Prüfe ob LocalizationManager vorhanden ist
        if (LocalizationManager.Instance == null)
        {
            Debug.LogError("LocalizationManager nicht gefunden! Dialoge werden nicht funktionieren.");
            return;
        }

        audioSource = gameObject.AddComponent<AudioSource>();
    }

    public void StartDialogGroup(string groupID)
    {
        if (isPlaying)
        {
            Debug.LogWarning("Es läuft bereits ein Dialog!");
            return;
        }

        DialogGroup group = dialogGroups.Find(g => g.groupID == groupID);
        
        if (group != null)
        {
            StartCoroutine(PlayDialogSequence(group.dialogs));
        }
        else
        {
            Debug.LogError($"Dialog-Gruppe mit ID '{groupID}' nicht gefunden!");
        }
    }

    IEnumerator PlayDialogSequence(List<DialogEntry> dialogSequence)
    {
        isPlaying = true;

        foreach (DialogEntry dialog in dialogSequence)
        {
            dialog.onDialogStart.Invoke();

            if (dialog.speakingNPC != null && dialog.lookAtTarget != null)
            {
                originalRotation = dialog.speakingNPC.transform.rotation;

                if (currentLookRoutine != null)
                    StopCoroutine(currentLookRoutine);

                currentLookRoutine = StartCoroutine(LookAtTarget(dialog));

                // Hole den Animator und aktiviere die Sprechanimation
                Animator npcAnimator = dialog.speakingNPC.GetComponent<Animator>();
                if (npcAnimator != null)
                {
                    npcAnimator.SetBool(dialog.talkAnimationParameter, true);
                }
            }

            AudioClip localizedAudio = LocalizationManager.Instance.GetAudio(dialog.dialogKey);
            if (localizedAudio != null)
            {
                audioSource.clip = localizedAudio;
                audioSource.Play();
                yield return new WaitForSeconds(localizedAudio.length);
            }

            if (dialog.speakingNPC != null)
            {
                yield return StartCoroutine(RotateBackToOriginal(dialog));
            }

            dialog.onDialogEnd.Invoke();
            yield return new WaitForSeconds(0.5f);
        }

        isPlaying = false;
    }

    IEnumerator LookAtTarget(DialogEntry dialog)
    {
        float startTime = Time.time;
        
        while (audioSource.isPlaying || Time.time < startTime + 1f) // Mindestens 1 Sekunde drehen
        {
            if (dialog.speakingNPC == null || dialog.lookAtTarget == null)
                yield break;

            // Berechne Richtung zum Ziel
            Vector3 direction = dialog.lookAtTarget.transform.position - dialog.speakingNPC.transform.position;
            direction.y = 0; // Verhindert Rotation nach oben/unten
            
            if (direction != Vector3.zero) // Verhindert Fehler wenn Positionen identisch sind
            {
                // Erstelle Zielrotation
                Quaternion targetRotation = Quaternion.LookRotation(direction);
                
                // Smooth zum Ziel drehen
                dialog.speakingNPC.transform.rotation = Quaternion.Lerp(
                    dialog.speakingNPC.transform.rotation, 
                    targetRotation, 
                    Time.deltaTime * dialog.turnSpeed
                );
            }
            
            yield return null;
        }
    }

    IEnumerator RotateBackToOriginal(DialogEntry dialog)
    {
        float elapsedTime = 0f;
        Quaternion startRotation = dialog.speakingNPC.transform.rotation;

        while (elapsedTime < 1f)
        {
            elapsedTime += Time.deltaTime * dialog.turnSpeed;
            dialog.speakingNPC.transform.rotation = Quaternion.Lerp(startRotation, originalRotation, elapsedTime);
            yield return null;
        }

        dialog.speakingNPC.transform.rotation = originalRotation;
    }

    public bool IsDialogPlaying()
    {
        return isPlaying;
    }
}
