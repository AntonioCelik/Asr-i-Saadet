using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AnimalSoundController : MonoBehaviour
{
    [Header("Sound Settings")]
    [Tooltip("Liste der möglichen Geräusche des Tieres")]
    public List<AudioClip> animalSounds = new List<AudioClip>();
    
    [Tooltip("Minimale Zeit zwischen den Geräuschen (in Sekunden)")]
    public float minTimeBetweenSounds = 10f;
    
    [Tooltip("Maximale Zeit zwischen den Geräuschen (in Sekunden)")]
    public float maxTimeBetweenSounds = 30f;
    
    [Tooltip("Lautstärke der Geräusche")]
    [Range(0f, 1f)]
    public float volume = 1f;

    [Header("Advanced Settings")]
    [Tooltip("Zufällige Variation in der Tonhöhe für mehr Natürlichkeit")]
    [Range(0f, 0.5f)]
    public float pitchVariation = 0.1f;
    
    [Tooltip("Chance dass ein Geräusch abgespielt wird (0-100%)")]
    [Range(0f, 100f)]
    public float playChance = 100f;
    
    [Tooltip("Nur Geräusche abspielen wenn der Player in der Nähe ist")]
    public bool onlyPlayNearPlayer = true;
    
    [Tooltip("Distanz zum Player ab der Geräusche abgespielt werden")]
    public float playerDetectionRange = 20f;

    private AudioSource audioSource;
    private float nextSoundTime;
    private Transform playerTransform;

    private void Start()
    {
        // AudioSource Komponente hinzufügen falls nicht vorhanden
        audioSource = GetComponent<AudioSource>();
        if(audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();
            
        // AudioSource Einstellungen
        audioSource.spatialBlend = 1f; // 3D Sound
        audioSource.rolloffMode = AudioRolloffMode.Linear;
        audioSource.minDistance = 5f;
        audioSource.maxDistance = 20f;
        
        // Player finden falls benötigt
        if(onlyPlayNearPlayer)
            playerTransform = GameObject.FindGameObjectWithTag("Player")?.transform;
            
        // Ersten Sound-Timer setzen
        SetNextSoundTime();
        
        // Soundschleife starten
        StartCoroutine(PlaySoundRoutine());
    }

    private void SetNextSoundTime()
    {
        nextSoundTime = Time.time + Random.Range(minTimeBetweenSounds, maxTimeBetweenSounds);
    }

    private IEnumerator PlaySoundRoutine()
    {
        while(true)
        {
            yield return new WaitUntil(() => Time.time >= nextSoundTime);
            
            // Prüfen ob in Player-Range (falls aktiviert)
            if(onlyPlayNearPlayer && playerTransform != null)
            {
                float distanceToPlayer = Vector3.Distance(transform.position, playerTransform.position);
                if(distanceToPlayer > playerDetectionRange)
                {
                    SetNextSoundTime();
                    continue;
                }
            }
            
            // Zufallschance prüfen
            if(Random.Range(0f, 100f) <= playChance)
            {
                PlayRandomSound();
            }
            
            SetNextSoundTime();
        }
    }

    private void PlayRandomSound()
    {
        if(animalSounds.Count == 0)
            return;

        // Zufälligen Sound wählen
        AudioClip randomClip = animalSounds[Random.Range(0, animalSounds.Count)];
        
        // Zufällige Tonhöhenvariation
        audioSource.pitch = 1f + Random.Range(-pitchVariation, pitchVariation);
        
        // Sound abspielen
        audioSource.PlayOneShot(randomClip, volume);
    }
}
