using UnityEngine;
using TMPro;
using System.Collections;

public class SubtitleManager : MonoBehaviour
{
    public TextMeshProUGUI subtitleText; // UI TextMeshPro komponenti

    private Coroutine currentCoroutine;

    void Start()
    {
        // Oyun ba�lad���nda altyaz�y� bo� yap
        subtitleText.text = "";
    }

    // Altyaz� yazma fonksiyonu
    public void WriteSubtitle(string text, float duration)
    {
        // Mevcut bir coroutine varsa durdur
        if (currentCoroutine != null)
        {
            StopCoroutine(currentCoroutine);
        }

        // Yeni coroutine ba�lat
        currentCoroutine = StartCoroutine(DisplaySubtitle(text, duration));
    }

    private IEnumerator DisplaySubtitle(string text, float duration)
    {
        subtitleText.text = text;

        // E�er s�re -1 ise altyaz�y� sonsuza kadar g�ster
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
