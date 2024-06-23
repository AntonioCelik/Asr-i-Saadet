using UnityEngine;

public class DestroyOnDistance : MonoBehaviour
{
    [Tooltip("The player object to track distance to.")]
    public Transform player;

    [Tooltip("The distance at which the object will be destroyed.")]
    public float destroyDistance;

    private void Update()
    {
        if (Vector3.Distance(transform.position, player.position) <= destroyDistance)
        {
            Destroy(gameObject);
        }
    }
}