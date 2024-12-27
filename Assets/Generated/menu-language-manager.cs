using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class MenuLanguageManager : MonoBehaviour
{
    [Header("UI References")]
    [Tooltip("Das Dropdown-Menü für die Sprachauswahl")]
    public TMP_Dropdown languageDropdown;

    [Header("Localization Keys")]
    [Tooltip("Key für 'Deutsch' in der Lokalisierung")]
    public string germanOptionKey = "menu_language_german";
    [Tooltip("Key für 'Türkisch' in der Lokalisierung")]
    public string turkishOptionKey = "menu_language_turkish";



    void OnEnable()
    {
        // Aktualisiere die Dropdown-Optionen
        UpdateDropdownOptions();

        int currentLanguage = PlayerPrefs.GetInt("SelectedLanguage", 0);

        // Setze den Dropdown-Wert ohne ein Event auszulösen
        languageDropdown.SetValueWithoutNotify(currentLanguage);

        // Füge den Listener hinzu
        languageDropdown.onValueChanged.RemoveAllListeners();
        languageDropdown.onValueChanged.AddListener(OnLanguageSelected);
    }

    private void UpdateDropdownOptions()
    {
        if (LocalizationManager.Instance == null)
            return;

        // Hole die lokalisierten Texte
        string germanText = LocalizationManager.Instance.GetText(germanOptionKey);
        string turkishText = LocalizationManager.Instance.GetText(turkishOptionKey);

        // Erstelle neue Optionen-Liste
        List<TMP_Dropdown.OptionData> options = new List<TMP_Dropdown.OptionData>
        {
            new TMP_Dropdown.OptionData(germanText),
            new TMP_Dropdown.OptionData(turkishText)
        };

        // Aktueller Wert merken
        int currentValue = languageDropdown.value;

        // Neue Optionen setzen
        languageDropdown.ClearOptions();
        languageDropdown.AddOptions(options);

        // Wert wiederherstellen
        languageDropdown.value = currentValue;
    }

    public void OnLanguageSelected(int languageIndex)
    {
        Debug.Log($"Language selected: {languageIndex}");

        // Speichere die Auswahl
        PlayerPrefs.SetInt("SelectedLanguage", languageIndex);
        PlayerPrefs.Save();
        Debug.Log($"Saved language preference: {PlayerPrefs.GetInt("SelectedLanguage")}");

        // Setze die Sprache
        SetLanguage(languageIndex);
    }

    private void SetLanguage(int languageIndex)
    {
        Debug.Log($"Setting language to index: {languageIndex}");

        // Konvertiere den Index in die entsprechende Sprache
        LocalizationManager.Language selectedLanguage =
            languageIndex == 0 ? LocalizationManager.Language.German :
                                LocalizationManager.Language.Turkish;

        // Setze die Sprache im LocalizationManager
        if (LocalizationManager.Instance != null)
        {
            Debug.Log($"LocalizationManager found, setting language to: {selectedLanguage}");
            LocalizationManager.Instance.SetLanguage(selectedLanguage);
        }
        else
        {
            Debug.LogError("LocalizationManager not found!");
        }
    }
}