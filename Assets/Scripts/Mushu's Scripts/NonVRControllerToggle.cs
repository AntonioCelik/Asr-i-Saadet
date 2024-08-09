using UnityEngine;

public class NonVRControllerToggle : MonoBehaviour
{
    public GameObject nonVRController; // Non-VR karakterinin kontrolü buraya baðlanacak
    private bool isControllerActive = false;

    void Start()
    {
        // Baþlangýçta non-VR kontrolünü devre dýþý býrak
        nonVRController.SetActive(false);
    }

    void Update()
    {
        // Tuþ kombinasyonunu kontrol et: Sol Ctrl + Sað Shift + M
        if (Input.GetKey(KeyCode.LeftControl) && Input.GetKey(KeyCode.RightShift) && Input.GetKeyDown(KeyCode.M))
        {
            // Non-VR kontrolünü etkinleþtir veya devre dýþý býrak
            isControllerActive = !isControllerActive;
            nonVRController.SetActive(isControllerActive);
        }
    }
}
