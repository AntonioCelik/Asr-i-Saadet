using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager2 : MonoBehaviour {
    public static MenuManager2 Instance { get; private set; }
    [SerializeField] private GameObject mainPage;
    [SerializeField] private GameObject yurumePage;
    [SerializeField] private GameObject tutmaBirakmaPage;
    [SerializeField] private GameObject oyunaBaslaPage;

  

    public void StartGame() {
        SceneManager.LoadScene(1); // Load game scene
    }

    public void OpenYurumePage() {
        mainPage.SetActive(false);
        yurumePage.SetActive(true);
    }
    public void OpenTutmaPage() {
        yurumePage.SetActive(false);
        tutmaBirakmaPage.SetActive(true);
    }
    public void OpenOyunaBaslaPage() {
        tutmaBirakmaPage.SetActive(false);
        oyunaBaslaPage.SetActive(true);
    }

    

    public void QuitGame() {
        Application.Quit();
    }
}
