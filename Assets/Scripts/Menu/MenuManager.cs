using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {
    private static MenuManager instance;
    private const string MainScene = "Hauptszene";
    [SerializeField] private GameObject mainPage;
    [SerializeField] private GameObject optionsPage;

    private void Awake() {
        if (instance == null)
            instance = this;
        else
            Destroy(this.gameObject);
    }

    public void StartGame() {
        SceneManager.LoadScene(MainScene);
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
