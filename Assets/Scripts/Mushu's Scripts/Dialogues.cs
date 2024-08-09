using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[System.Serializable]
public class DialogueEntry
{
    public string text; // Konu�ma metni
    public float duration; // Konu�ma s�resi
}

[System.Serializable]
public class DialogueList
{
    [Header("Diyalog Listesi")]
    public List<DialogueEntry> entries = new List<DialogueEntry>(); // Konu�ma listesi

    [Header("Diyalog Bittikten Sonra Tetiklenecek Olay")]
    public UnityEvent onDialogueComplete; // Diyalog tamamland���nda tetiklenecek olay
}

public class Dialogues : MonoBehaviour
{
    [Header("Genel Liste")]
    public List<DialogueList> generalDialogueLists = new List<DialogueList>(); // Genel liste

    private Coroutine currentDialogueCoroutine;

    public void RunDialog(int listIndex)
    {
        if (listIndex >= 0 && listIndex < generalDialogueLists.Count)
        {
            if (currentDialogueCoroutine != null)
            {
                StopAllDialogs();
            }
            currentDialogueCoroutine = StartCoroutine(PlayDialogueList(generalDialogueLists[listIndex]));
        }
        else
        {
            Debug.LogError("Ge�ersiz liste indeksi!");
        }
    }

    public void StopAllDialogs()
    {
        if (currentDialogueCoroutine != null)
        {
            StopCoroutine(currentDialogueCoroutine);
            currentDialogueCoroutine = null;
        }

        SubtitleManager subtitleManager = FindObjectOfType<SubtitleManager>();
        subtitleManager.WriteSubtitle("", 0); // Altyaz�y� temizle
    }

    private IEnumerator<WaitForSeconds> PlayDialogueList(DialogueList dialogueList)
    {
        SubtitleManager subtitleManager = FindObjectOfType<SubtitleManager>();

        foreach (DialogueEntry entry in dialogueList.entries)
        {
            subtitleManager.WriteSubtitle(entry.text, entry.duration);
            yield return new WaitForSeconds(entry.duration);
        }

        subtitleManager.WriteSubtitle("", 0); // Liste bitiminde altyaz�y� temizle

        // Diyalog tamamland���nda olay tetikle
        dialogueList.onDialogueComplete?.Invoke();
    }
}
