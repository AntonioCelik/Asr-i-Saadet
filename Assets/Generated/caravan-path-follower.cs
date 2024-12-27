using UnityEngine;
using System.Collections;

public class CaravanPathFollower : MonoBehaviour
{
    [Header("Path Settings")]
    [Tooltip("Referenz zum PathManager der die Wegpunkte enthält")]
    public PathManager pathManager;

    [Tooltip("Wie schnell sich die Karawane bewegt")]
    public float moveSpeed = 2f;

    [Tooltip("Wie schnell sich die Karawane dreht")]
    public float rotationSpeed = 5f;

    [Tooltip("Wie nah muss die Karawane an einen Wegpunkt kommen?")]
    public float waypointThreshold = 0.1f;

    [Header("Animation")]
    [Tooltip("Animator für die Kamel-Animation")]
    public Animator camelAnimator;

    [Tooltip("Name des Bool Parameters für die Lauf-Animation")]
    public string walkParameterName = "isWalking";

    private bool isMoving = false;
    private int currentWaypoint = 0;

    public void StartMoving()
    {
        if (pathManager == null || pathManager.waypoints.Count == 0)
        {
            Debug.LogWarning("Kein PathManager oder keine Wegpunkte zugewiesen!");
            return;
        }

        isMoving = true;
        currentWaypoint = 0;

        if (camelAnimator != null)
            camelAnimator.SetBool(walkParameterName, true);

        // Starte mit initialer Drehung zum ersten Wegpunkt
        StartCoroutine(InitialRotateAndMove());
    }

    // Initiale Drehung zum ersten Wegpunkt
    private IEnumerator InitialRotateAndMove()
    {
        Vector3 targetPosition = pathManager.GetWaypointPosition(0);
        Vector3 direction = (targetPosition - transform.position).normalized;

        //Ignoriere Y-Achse für die Rotation
        direction.y = 0;

        if (direction != Vector3.zero)
        {

            Quaternion targetRotation = Quaternion.LookRotation(direction);


            while (Quaternion.Angle(transform.rotation, targetRotation) > 0.1f)
            {
                transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation,
                                                   Time.deltaTime * rotationSpeed);
                yield return null;
            }
        }

        StartCoroutine(FollowPath());
    }

    private IEnumerator FollowPath()
    {
        while (isMoving && currentWaypoint < pathManager.waypoints.Count)
        {
            Vector3 targetPosition = pathManager.GetWaypointPosition(currentWaypoint);

            while (Vector3.Distance(transform.position, targetPosition) > waypointThreshold)
            {
                if (!isMoving) yield break;

                // Bewegungsrichtung ohne Y-Komponente
                Vector3 direction = (targetPosition - transform.position).normalized;
                direction.y = 0;

                // Smooth Rotation in Bewegungsrichtung
                if (direction != Vector3.zero)
                {
                    Quaternion targetRotation = Quaternion.LookRotation(direction);
                    transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation,
                                                       Time.deltaTime * rotationSpeed);
                }

                // NEU: Bewegung nur in X und Z
                Vector3 movement = direction * moveSpeed * Time.deltaTime;
                transform.position += movement;

                yield return null;
            }

            if (pathManager.waypoints[currentWaypoint].waitTime > 0)
            {
                if (camelAnimator != null)
                    camelAnimator.SetBool(walkParameterName, false);

                yield return new WaitForSeconds(pathManager.waypoints[currentWaypoint].waitTime);

                if (camelAnimator != null)
                    camelAnimator.SetBool(walkParameterName, true);
            }

            pathManager.waypoints[currentWaypoint].onWaypointReached?.Invoke();
            currentWaypoint++;
        }

        StopMoving();
    }

    public void StopMoving()
    {
        isMoving = false;

        if (camelAnimator != null)
            camelAnimator.SetBool(walkParameterName, false);

        StopAllCoroutines();
    }
}