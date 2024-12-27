using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerMovement : MonoBehaviour
{
    public InputActionReference movementAction; // Verweise auf deine Movement-Action
    private Vector2 moveInput; // Speichert den Input-Wert

    void Update()
    {
        // Den Thumbstick-Wert lesen
        moveInput = movementAction.action.ReadValue<Vector2>();
        Debug.Log("Movement Input: " + moveInput);

        // Bewege den Spieler basierend auf dem Input
        transform.Translate(new Vector3(moveInput.x, 0, moveInput.y) * Time.deltaTime * 5f);
    }
}