using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLineTrigger : MonoBehaviour
{
    public HorseRaceManager raceManager; // Referenz zum HorseRaceManager

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log($"Finish Line Trigger detected: {other.gameObject.name}, Tag: {other.gameObject.tag}");

        // Rufe die Methode des HorseRaceManagers auf
        if (raceManager != null)
        {
            if (other.gameObject.CompareTag("PlayerHorse") || other.gameObject.CompareTag("AIHorse"))
            {
                raceManager.HandleFinishLineTrigger(other.gameObject);
            }
        }
        else
        {
            Debug.LogError("Race Manager not assigned to Finish Line Trigger!");
        }
    }
}