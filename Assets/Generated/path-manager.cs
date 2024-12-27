using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;

public class PathManager : MonoBehaviour 
{
    [System.Serializable]
    public class Waypoint
    {
        public Transform point;              // Der Transform des Wegpunktes
        public float waitTime;               // Wartezeit an diesem Punkt (in Sekunden)
        public UnityEvent onWaypointReached; // Event das ausgelöst wird, wenn der Wegpunkt erreicht wird
    }

    [Header("Path Settings")]
    [Tooltip("Liste aller Wegpunkte")]
    public List<Waypoint> waypoints = new List<Waypoint>();

    [Tooltip("Soll der Pfad als Gizmo in der Scene-View angezeigt werden?")]
    public bool showPath = true;

    [Tooltip("Farbe des Pfades in der Scene-View")]
    public Color pathColor = Color.yellow;

    // Zeichnet den Pfad in der Scene-View
    private void OnDrawGizmos()
    {
        if (!showPath || waypoints.Count == 0)
            return;

        Gizmos.color = pathColor;

        // Verbinde die Wegpunkte mit Linien
        for (int i = 0; i < waypoints.Count - 1; i++)
        {
            if (waypoints[i].point != null && waypoints[i + 1].point != null)
            {
                Gizmos.DrawLine(waypoints[i].point.position, waypoints[i + 1].point.position);
                Gizmos.DrawSphere(waypoints[i].point.position, 0.3f);
            }
        }

        // Zeichne den letzten Wegpunkt
        if (waypoints[waypoints.Count - 1].point != null)
            Gizmos.DrawSphere(waypoints[waypoints.Count - 1].point.position, 0.3f);
    }

    // Gibt die Position eines bestimmten Wegpunktes zurück
    public Vector3 GetWaypointPosition(int index)
    {
        if (index >= 0 && index < waypoints.Count && waypoints[index].point != null)
            return waypoints[index].point.position;
        return Vector3.zero;
    }
}
