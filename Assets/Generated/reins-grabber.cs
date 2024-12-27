using UnityEngine;

public class ReinsAttacher : MonoBehaviour
{
    [Header("Hand References")]
    public Transform leftHand;
    public Transform rightHand;

    [Header("Reins")]
    public Transform leftRein;
    public Transform rightRein;

    [Header("Left Rein Offset")]
    [Tooltip("Position Offset für den linken Zügel")]
    public Vector3 leftPositionOffset;
    [Tooltip("Rotation Offset für den linken Zügel")]
    public Vector3 leftRotationOffset;

    [Header("Right Rein Offset")]
    [Tooltip("Position Offset für den rechten Zügel")]
    public Vector3 rightPositionOffset;
    [Tooltip("Rotation Offset für den rechten Zügel")]
    public Vector3 rightRotationOffset;

    void Start()
    {
        if (leftHand == null || rightHand == null || leftRein == null || rightRein == null)
        {
            Debug.LogError("Hand oder Rein Referenzen fehlen!", this);
            return;
        }

        // Setze die Zügel mit ihren individuellen Offsets
        AttachReinToHand(leftRein, leftHand, leftPositionOffset, leftRotationOffset);
        AttachReinToHand(rightRein, rightHand, rightPositionOffset, rightRotationOffset);
    }

    private void AttachReinToHand(Transform rein, Transform hand, Vector3 posOffset, Vector3 rotOffset)
    {
        rein.parent = hand;
        rein.localPosition = posOffset;
        rein.localRotation = Quaternion.Euler(rotOffset);
    }
}