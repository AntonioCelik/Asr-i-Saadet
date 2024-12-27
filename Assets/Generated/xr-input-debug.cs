using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;

public class XRInputDebug : MonoBehaviour
{
    [Header("Input Action References")]
    [Tooltip("Die Movement Action aus dem Input Action Asset von Malbers")]
    public InputActionReference movementAction;

    [Header("Debug UI (Optional)")]
    [Tooltip("Text Component zum Anzeigen der Input Werte (Optional)")]
    public TextMeshProUGUI debugText;

    private void OnEnable()
    {
        // Aktiviere die Action wenn sie existiert
        if (movementAction != null && movementAction.action != null)
        {
            movementAction.action.Enable();
            // Füge einen Listener hinzu der bei jedem Input ausgelöst wird
            movementAction.action.performed += OnMovementPerformed;
        }
        else
        {
            Debug.LogError("Movement Action ist nicht zugewiesen!");
        }
    }

    private void OnDisable()
    {
        // Cleanup beim Deaktivieren
        if (movementAction != null && movementAction.action != null)
        {
            movementAction.action.Disable();
            movementAction.action.performed -= OnMovementPerformed;
        }
    }

    private void OnMovementPerformed(InputAction.CallbackContext context)
    {
        // Hole den Vector2 Wert vom Thumbstick
        Vector2 movement = context.ReadValue<Vector2>();
        
        // Log die Werte in der Console
        Debug.Log($"XR Movement Input: {movement}");

        // Wenn ein Debug Text zugewiesen ist, zeige die Werte dort an
        if (debugText != null)
        {
            debugText.text = $"Movement: {movement.x:F2}, {movement.y:F2}";
        }
    }
}
