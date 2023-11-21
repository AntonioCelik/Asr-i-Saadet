using UnityEngine;

public class PlayAudioOnce : MonoBehaviour
{
    public AudioSource audioSource; // Reference to the AudioSource component on your character
    private bool hasPlayed = false; // Flag to check if the audio has been played
    public GameObject usttekiOk;
    public GameObject gidilcekYerler;
    private void OnTriggerEnter(Collider other)
    {
        // Check if the character has entered the trigger and the audio has not been played yet
        if ( !hasPlayed)
        {
            audioSource.Play(); // Play the audio
            hasPlayed = true; // Set the flag to true so it won't play again
            usttekiOk.SetActive(true);
            gidilcekYerler.SetActive(true);
        }
    }
}
