using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[System.Serializable]
public class DialogueEntry
{
    public string text; // Konuþma metni
    public float duration; // Konuþma süresi
}

[System.Serializable]
public class DialogueList
{
    [Header("Diyalog Listesi")]
    public List<DialogueEntry> entries = new List<DialogueEntry>(); // Konuþma listesi

    [Header("Diyalog Bittikten Sonra Tetiklenecek Olay")]
    public UnityEvent onDialogueComplete; // Diyalog tamamlandýðýnda tetiklenecek olay
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
            Debug.LogError("Geçersiz liste indeksi!");
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
        subtitleManager.WriteSubtitle("", 0); // Altyazýyý temizle
    }

    private IEnumerator<WaitForSeconds> PlayDialogueList(DialogueList dialogueList)
    {
        SubtitleManager subtitleManager = FindObjectOfType<SubtitleManager>();

        foreach (DialogueEntry entry in dialogueList.entries)
        {
            subtitleManager.WriteSubtitle(entry.text, entry.duration);
            yield return new WaitForSeconds(entry.duration);
        }

        subtitleManager.WriteSubtitle("", 0); // Liste bitiminde altyazýyý temizle

        // Diyalog tamamlandýðýnda olay tetikle
        dialogueList.onDialogueComplete?.Invoke();
    }
}
