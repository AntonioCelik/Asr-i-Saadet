using UnityEngine;
using TMPro;
using System.Collections;

public class SubtitleManager : MonoBehaviour
{
    public TextMeshProUGUI subtitleText; // UI TextMeshPro komponenti

    private Coroutine currentCoroutine;

    void Start()
    {
        // Oyun baþladýðýnda altyazýyý boþ yap
        subtitleText.text = "";
    }

    // Altyazý yazma fonksiyonu
    public void WriteSubtitle(string text, float duration)
    {
        // Mevcut bir coroutine varsa durdur
        if (currentCoroutine != null)
        {
            StopCoroutine(currentCoroutine);
        }

        // Yeni coroutine baþlat
        currentCoroutine = StartCoroutine(DisplaySubtitle(text, duration));
    }

    private IEnumerator DisplaySubtitle(string text, float duration)
    {
        subtitleText.text = text;

        // Eðer süre -1 ise altyazýyý sonsuza kadar göster
        if (duration == -1)
        {
            yield return null; // Sonsuz bekleme
        }
        else
        {
            yield return new WaitForSeconds(duration);
            subtitleText.text = "";
        }
    }
}
