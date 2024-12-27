using UnityEngine;

public class InitialLanguageManager : MonoBehaviour
{
    void Start()
    {
        // Lade die gespeicherte Sprache
        int savedLanguage = PlayerPrefs.GetInt("SelectedLanguage", 0);
        
        // Setze die Sprache im LocalizationManager
        if (LocalizationManager.Instance != null)
        {
            LocalizationManager.Language selectedLanguage = 
                savedLanguage == 0 ? LocalizationManager.Language.German : 
                                   LocalizationManager.Language.Turkish;
            
            LocalizationManager.Instance.SetLanguage(selectedLanguage);
        }
    }
}
