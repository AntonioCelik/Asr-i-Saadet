using UnityEngine;

public class TurnToObjectInRange : MonoBehaviour
{
    [Tooltip("The object to turn towards once it is in range.")]
    public Transform targetObject;

    [Tooltip("The range at which the object will start turning towards the target object.")]
    public float range = 10f;

    void Update()
    {
        if (targetObject != null)
        {
            float distance = Vector3.Distance(transform.position, targetObject.position);
            if (distance <= range)
            {
                Vector3 direction = targetObject.position - transform.position;
                direction.y = 0f; // Ignore y component for rotation
                Quaternion targetRotation = Quaternion.LookRotation(direction);
                transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRotation, Time.deltaTime * 100f);
            }
        }
    }
}