using UnityEngine;

public class NonVRPlayerMovement : MonoBehaviour
{
    public float moveSpeed = 5f;
    public float turnSpeed = 3f;
    public float lookSpeed = 3f; // Kamera hareket h�z�
    public Transform cameraTransform; // Kameray� karakterin g�vdesine ba�l�yoruz

    private Rigidbody rb;
    private float verticalRotation = 0f;
    private bool isMouseControlEnabled = true; // Fare kontrol� a��k m� kapal� m�?

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        EnableMouseControl(); // Varsay�lan olarak fare kontrol�n� etkinle�tir
    }

    void Update()
    {
        // E�er fare kontrol� etkinse, bak�� y�n�n� ve hareketi kontrol et
        if (isMouseControlEnabled)
        {
            // Karakterin bak�� y�n�ne g�re hareket vekt�r�n� hesapla
            float moveHorizontal = Input.GetAxis("Horizontal");
            float moveVertical = Input.GetAxis("Vertical");

            // Karakterin lokal uzay�nda hareket vekt�r�n� olu�tur
            Vector3 movement = transform.right * moveHorizontal + transform.forward * moveVertical;
            rb.MovePosition(transform.position + movement * moveSpeed * Time.deltaTime);

            // Mouse hareketine ba�l� olarak karakteri sa�a-sola d�nd�r
            float turn = Input.GetAxis("Mouse X");
            Vector3 rotation = new Vector3(0f, turn * turnSpeed, 0f);
            rb.MoveRotation(rb.rotation * Quaternion.Euler(rotation));

            // Mouse hareketine ba�l� olarak kameray� yukar�-a�a�� d�nd�r
            float look = Input.GetAxis("Mouse Y");
            verticalRotation -= look * lookSpeed;
            verticalRotation = Mathf.Clamp(verticalRotation, -90f, 90f); // 90 derece s�n�r� koyuyoruz
            cameraTransform.localRotation = Quaternion.Euler(verticalRotation, 0f, 0f);
        }
    }

    // Fare kontrol�n� etkinle�tir ve fareyi gizle
    public void EnableMouseControl()
    {
        isMouseControlEnabled = true;
        Cursor.lockState = CursorLockMode.Locked; // Cursor'u kilitle
        Cursor.visible = false; // Cursor'u g�r�nmez yap
    }

    // Fare kontrol�n� devre d��� b�rak ve fareyi g�r�n�r yap
    public void DisableMouseControl()
    {
        isMouseControlEnabled = false;
        Cursor.lockState = CursorLockMode.None; // Cursor kilidini a�
        Cursor.visible = true; // Cursor'u g�r�n�r yap
    }
}
