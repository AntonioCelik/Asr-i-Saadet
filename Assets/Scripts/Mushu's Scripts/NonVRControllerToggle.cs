using UnityEngine;

public class NonVRControllerToggle : MonoBehaviour
{
    public GameObject nonVRController; // Non-VR karakterinin kontrol� buraya ba�lanacak
    private bool isControllerActive = false;

    void Start()
    {
        // Ba�lang��ta non-VR kontrol�n� devre d��� b�rak
        nonVRController.SetActive(false);
    }

    void Update()
    {
        // Tu� kombinasyonunu kontrol et: Sol Ctrl + Sa� Shift + M
        if (Input.GetKey(KeyCode.LeftControl) && Input.GetKey(KeyCode.RightShift) && Input.GetKeyDown(KeyCode.M))
        {
            // Non-VR kontrol�n� etkinle�tir veya devre d��� b�rak
            isControllerActive = !isControllerActive;
            nonVRController.SetActive(isControllerActive);
        }
    }
}
