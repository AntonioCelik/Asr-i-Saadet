using UnityEngine;
using System.Collections.Generic;
using UnityEngine.Events;

public class LocalizationManager : MonoBehaviour
{
    // Singleton-Pattern für einfachen Zugriff
    public static LocalizationManager Instance { get; private set; }

    public enum Language
    {
        German,
        Turkish
    }

    [System.Serializable]
    public class LocalizedContent
    {
        public string key;             // Eindeutiger Identifier für den Text/Audio
        [TextArea]
        public string germanText;      // Deutscher Text
        [TextArea]
        public string turkishText;     // Türkischer Text
        public AudioClip germanAudio;  // Deutsche Audio
        public AudioClip turkishAudio; // Türkische Audio
    }

    [Header("Settings")]
    public Language currentLanguage = Language.German;
    
    [Header("Content")]
    public List<LocalizedContent> localizedContent = new List<LocalizedContent>();

    // Event das aufgerufen wird, wenn die Sprache sich ändert
    public UnityEvent onLanguageChanged;

    // Dictionary für schnellen Zugriff
    private Dictionary<string, LocalizedContent> contentDictionary = new Dictionary<string, LocalizedContent>();

    private void Awake()
    {
        // Singleton Setup
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            InitializeDictionary();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void InitializeDictionary()
    {
        contentDictionary.Clear();
        foreach (var content in localizedContent)
        {
            if (!string.IsNullOrEmpty(content.key))
            {
                contentDictionary[content.key] = content;
            }
        }
    }

    // Sprache ändern
    public void SetLanguage(Language language)
    {
        currentLanguage = language;
        onLanguageChanged?.Invoke();
    }

    // Text in aktueller Sprache abrufen
    public string GetText(string key)
    {
        if (contentDictionary.TryGetValue(key, out LocalizedContent content))
        {
            return currentLanguage == Language.German ? content.germanText : content.turkishText;
        }
        
        Debug.LogWarning($"Localized text not found for key: {key}");
        return $"Missing text: {key}";
    }

    // Audio in aktueller Sprache abrufen
    public AudioClip GetAudio(string key)
    {
        if (contentDictionary.TryGetValue(key, out LocalizedContent content))
        {
            return currentLanguage == Language.German ? content.germanAudio : content.turkishAudio;
        }
        
        Debug.LogWarning($"Localized audio not found for key: {key}");
        return null;
    }
}
