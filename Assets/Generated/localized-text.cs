using UnityEngine;
using TMPro;

// Diese Komponente wird jedem UI-Text hinzugefügt, der lokalisiert werden soll
public class LocalizedText : MonoBehaviour
{
    [Tooltip("Der Key für den lokalisierten Text")]
    public string textKey;
    
    // Referenz auf die Text-Komponente
    private TextMeshProUGUI textComponent;

    private void Start()
    {
        // Hole Text-Komponente
        textComponent = GetComponent<TextMeshProUGUI>();
        
        // Initialen Text setzen
        UpdateText();
        
        // Auf Sprachänderungen hören
        LocalizationManager.Instance.onLanguageChanged.AddListener(UpdateText);
    }

    private void OnDestroy()
    {
        // Listener entfernen wenn das Object zerstört wird
        if (LocalizationManager.Instance != null)
            LocalizationManager.Instance.onLanguageChanged.RemoveListener(UpdateText);
    }

    // Aktualisiert den Text basierend auf der aktuellen Sprache
    public void UpdateText()
    {
        if (textComponent != null && LocalizationManager.Instance != null)
        {
            textComponent.text = LocalizationManager.Instance.GetText(textKey);
        }
    }
}
