using UnityEngine;

public class NonVRPlayerMovement : MonoBehaviour
{
    public float moveSpeed = 5f;
    public float turnSpeed = 3f;
    public float lookSpeed = 3f; // Kamera hareket hýzý
    public Transform cameraTransform; // Kamerayý karakterin gövdesine baðlýyoruz

    private Rigidbody rb;
    private float verticalRotation = 0f;
    private bool isMouseControlEnabled = true; // Fare kontrolü açýk mý kapalý mý?

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        EnableMouseControl(); // Varsayýlan olarak fare kontrolünü etkinleþtir
    }

    void Update()
    {
        // Eðer fare kontrolü etkinse, bakýþ yönünü ve hareketi kontrol et
        if (isMouseControlEnabled)
        {
            // Karakterin bakýþ yönüne göre hareket vektörünü hesapla
            float moveHorizontal = Input.GetAxis("Horizontal");
            float moveVertical = Input.GetAxis("Vertical");

            // Karakterin lokal uzayýnda hareket vektörünü oluþtur
            Vector3 movement = transform.right * moveHorizontal + transform.forward * moveVertical;
            rb.MovePosition(transform.position + movement * moveSpeed * Time.deltaTime);

            // Mouse hareketine baðlý olarak karakteri saða-sola döndür
            float turn = Input.GetAxis("Mouse X");
            Vector3 rotation = new Vector3(0f, turn * turnSpeed, 0f);
            rb.MoveRotation(rb.rotation * Quaternion.Euler(rotation));

            // Mouse hareketine baðlý olarak kamerayý yukarý-aþaðý döndür
            float look = Input.GetAxis("Mouse Y");
            verticalRotation -= look * lookSpeed;
            verticalRotation = Mathf.Clamp(verticalRotation, -90f, 90f); // 90 derece sýnýrý koyuyoruz
            cameraTransform.localRotation = Quaternion.Euler(verticalRotation, 0f, 0f);
        }
    }

    // Fare kontrolünü etkinleþtir ve fareyi gizle
    public void EnableMouseControl()
    {
        isMouseControlEnabled = true;
        Cursor.lockState = CursorLockMode.Locked; // Cursor'u kilitle
        Cursor.visible = false; // Cursor'u görünmez yap
    }

    // Fare kontrolünü devre dýþý býrak ve fareyi görünür yap
    public void DisableMouseControl()
    {
        isMouseControlEnabled = false;
        Cursor.lockState = CursorLockMode.None; // Cursor kilidini aç
        Cursor.visible = true; // Cursor'u görünür yap
    }
}
