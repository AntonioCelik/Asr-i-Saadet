using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class NPCFollower : MonoBehaviour
{
    [Header("Path Following")]
    [Tooltip("Referenz zum PathManager")]
    public PathManager pathManager;

    [Tooltip("Bewegungsgeschwindigkeit")]
    public float moveSpeed = 2f;

    [Tooltip("Drehgeschwindigkeit")]
    public float rotationSpeed = 5f;

    [Tooltip("Wie nah muss der NPC an einen Wegpunkt kommen?")]
    public float waypointThreshold = 0.1f;

    [Header("Animation Settings")]
    [Tooltip("Animator des NPCs")]
    public Animator npcAnimator;

    [Tooltip("Name des Bool Parameters für Bewegung im Animator")]
    public string moveParameterName = "isMoving";

    // NEUE KLASSE für Follower mit Offset
    [Header("Following Settings")]
    
    // NEUE LISTE statt der alten followers Liste
    [Tooltip("Liste der Follower mit ihren Offset-Positionen")]
    public List<FollowerOffset> followerOffsets = new List<FollowerOffset>();

    [Tooltip("Grundabstand zwischen den Followern")]
    public float followerSpacing = 2f;

    [Tooltip("Name des Bool Parameters für Bewegung im Follower Animator")]
    public string followerMoveParameterName = "isMoving";

    [System.Serializable]
    public class FollowerOffset
    {
        public GameObject follower;
        public Vector3 offset = Vector3.zero;  // Seitlicher und vertikaler Offset
    }

    private List<Animator> followerAnimators = new List<Animator>();
    private int currentWaypoint = 0;
    private bool isMoving = false;
    private List<Vector3> previousPositions = new List<Vector3>();
    private float previousPositionRecordInterval = 0.1f;
    private float lastRecordTime = 0f;

    private void Start()
    {
        // Sammle alle Animator-Komponenten der Follower
        foreach (var followerOffset in followerOffsets)
        {
            if (followerOffset.follower != null)
            {
                Animator animator = followerOffset.follower.GetComponent<Animator>();
                if (animator != null)
                {
                    followerAnimators.Add(animator);
                }
            }
        }
    }

    public void StartMoving()
    {
        if (pathManager == null || pathManager.waypoints.Count == 0)
        {
            Debug.LogWarning("Kein PathManager oder keine Wegpunkte zugewiesen!");
            return;
        }

        isMoving = true;
        currentWaypoint = 0;
        StartCoroutine(InitialRotationAndMove());
    }

    private IEnumerator InitialRotationAndMove()
    {
        // Aktiviere die Bewegungsanimationen VOR der Drehung
        SetAnimationState(true);

        // Erste Rotation zum Wegpunkt
        Vector3 targetPosition = pathManager.GetWaypointPosition(0);
        Vector3 direction = (targetPosition - transform.position).normalized;
        Quaternion targetRotation = Quaternion.LookRotation(direction);

        // Smooth drehen
        float elapsedTime = 0f;
        Quaternion startRotation = transform.rotation;

        while (elapsedTime < 1f)
        {
            elapsedTime += Time.deltaTime * rotationSpeed;
            transform.rotation = Quaternion.Lerp(startRotation, targetRotation, elapsedTime);
            yield return null;
        }

        transform.rotation = targetRotation;
        StartCoroutine(FollowPath());
    }

    public void StopMoving()
    {
        isMoving = false;
        SetAnimationState(false);
        StopAllCoroutines();
    }

    private void SetAnimationState(bool moving)
    {
        if (npcAnimator != null)
        {
            npcAnimator.SetBool(moveParameterName, moving);
        }

        foreach (Animator animator in followerAnimators)
        {
            if (animator != null)
            {
                animator.SetBool(followerMoveParameterName, moving);
            }
        }
    }

    private IEnumerator FollowPath()
    {
        while (isMoving && currentWaypoint < pathManager.waypoints.Count)
        {
            Vector3 targetPosition = pathManager.GetWaypointPosition(currentWaypoint);

            while (Vector3.Distance(transform.position, targetPosition) > waypointThreshold)
            {
                Vector3 direction = (targetPosition - transform.position).normalized;

                if (direction != Vector3.zero)
                {
                    Quaternion targetRotation = Quaternion.LookRotation(direction);
                    transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation,
                                                       Time.deltaTime * rotationSpeed);
                }

                transform.position += direction * moveSpeed * Time.deltaTime;
                RecordPosition();
                UpdateFollowers();
                yield return null;
            }

            pathManager.waypoints[currentWaypoint].onWaypointReached?.Invoke();

            if (pathManager.waypoints[currentWaypoint].waitTime > 0)
            {
                SetAnimationState(false);
                yield return new WaitForSeconds(pathManager.waypoints[currentWaypoint].waitTime);
                SetAnimationState(true);
            }

            currentWaypoint++;
        }

        isMoving = false;
        SetAnimationState(false);
    }

    private void RecordPosition()
    {
        if (Time.time - lastRecordTime >= previousPositionRecordInterval)
        {
            previousPositions.Add(transform.position);
            lastRecordTime = Time.time;

            int maxPositions = Mathf.CeilToInt((followerSpacing * followerOffsets.Count) /
                                             (moveSpeed * previousPositionRecordInterval));
            while (previousPositions.Count > maxPositions)
                previousPositions.RemoveAt(0);
        }
    }

    // NEUE UpdateFollowers Methode
    private void UpdateFollowers()
    {
        for (int i = 0; i < followerOffsets.Count; i++)
        {
            if (followerOffsets[i].follower == null) continue;

            int targetIndex = Mathf.FloorToInt((i + 1) * followerSpacing /
                                             (moveSpeed * previousPositionRecordInterval));
            targetIndex = Mathf.Clamp(previousPositions.Count - 1 - targetIndex, 0,
                                    previousPositions.Count - 1);

            if (targetIndex < previousPositions.Count)
            {
                Vector3 targetPos = previousPositions[targetIndex];

                // Füge den individuellen Offset hinzu
                Vector3 offsetPosition = targetPos + transform.right * followerOffsets[i].offset.x
                                                 + transform.up * followerOffsets[i].offset.y
                                                 + transform.forward * followerOffsets[i].offset.z;

                followerOffsets[i].follower.transform.position = Vector3.Lerp(
                    followerOffsets[i].follower.transform.position,
                    offsetPosition,
                    Time.deltaTime * moveSpeed);

                if (targetIndex > 0)
                {
                    Vector3 direction = (previousPositions[targetIndex] -
                                       previousPositions[targetIndex - 1]).normalized;
                    if (direction != Vector3.zero)
                    {
                        Quaternion targetRotation = Quaternion.LookRotation(direction);
                        followerOffsets[i].follower.transform.rotation = Quaternion.Lerp(
                            followerOffsets[i].follower.transform.rotation,
                            targetRotation,
                            Time.deltaTime * rotationSpeed);
                    }
                }
            }
        }
    }
}