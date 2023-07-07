using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {
    public static MenuManager Instance { get; private set; }
    [SerializeField] private GameObject mainPage;
    [SerializeField] private GameObject optionsPage;

    private void Awake() {
        if (Instance == null) {
            Instance = this;
        }
        else if (Instance != this) {
            Destroy(this.gameObject);
            return;
        }
    }

    public void StartGame() {
        SceneManager.LoadScene(1); // Load game scene
    }

    public void OpenOptionsPage() {
        mainPage.SetActive(false);
        optionsPage.SetActive(true);
    }

    public void CloseOptionsPage() {
        optionsPage.SetActive(false);
        mainPage.SetActive(true);
    }

    public void SetMasterVolume(float volume) {
        AudioListener.volume = volume;
    }

    public void QuitGame() {
        Application.Quit();
    }
}
