using UnityEngine;

public class ObjectMonitor : MonoBehaviour
{
    [Tooltip("Tag of the objects to monitor")]
    public string objectTag;

    [Tooltip("Object to disable when 4 objects with the given tag are destroyed")]
    public GameObject objectToDisable;

    private int destroyedObjectsCount = 0;

    private void OnEnable()
    {
        ObjectDestroyer.OnObjectDestroyed += HandleObjectDestroyed;
    }

    private void OnDisable()
    {
        ObjectDestroyer.OnObjectDestroyed -= HandleObjectDestroyed;
    }

    private void HandleObjectDestroyed(GameObject destroyedObject)
    {
        if (destroyedObject.tag == objectTag)
        {
            destroyedObjectsCount++;

            if (destroyedObjectsCount >= 4)
            {
                objectToDisable.SetActive(false);
            }
        }
    }
}

public class ObjectDestroyer : MonoBehaviour
{
    public static event System.Action<GameObject> OnObjectDestroyed;

    private void OnDestroy()
    {
        OnObjectDestroyed?.Invoke(gameObject);
    }
}