using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Polyperfect.Common
{
    public class Common_AudioManager : MonoBehaviour
    {
        private static Common_AudioManager instance;

        [Header("General Settings")]
        [SerializeField]
        private bool muteSound;
        [SerializeField]
        private int objectPoolLength = 20;
        [SerializeField]
        private float soundDistance = 7f;
        [SerializeField]
        private bool logSounds = false;

        [Header("Animal Sound Settings")]
        [SerializeField]
        [Range(0f, 1f)]
        [Tooltip("Lautstärke der Tiergeräusche")]
        private float animalSoundVolume = 0.5f;

        [SerializeField]
        [Range(5f, 60f)]
        [Tooltip("Minimale Zeit zwischen Tiergeräuschen in Sekunden")]
        private float minSoundInterval = 5f;

        [SerializeField]
        [Range(5f, 60f)]
        [Tooltip("Maximale Zeit zwischen Tiergeräuschen in Sekunden")]
        private float maxSoundInterval = 15f;

        private List<AudioSource> pool = new List<AudioSource>();

        public static float AnimalVolume => instance.animalSoundVolume;
        public static float MinInterval => instance.minSoundInterval;
        public static float MaxInterval => instance.maxSoundInterval;

        private void Awake()
        {
            instance = this;
            for (int i = 0; i < objectPoolLength; i++)
            {
                GameObject soundObject = new GameObject();
                soundObject.transform.SetParent(instance.transform);
                soundObject.name = "Sound Effect";
                AudioSource audioSource = soundObject.AddComponent<AudioSource>();
                audioSource.spatialBlend = 1f;
                audioSource.minDistance = instance.soundDistance;
                audioSource.gameObject.SetActive(false);
                pool.Add(audioSource);
            }
        }

        public static void PlaySound(AudioClip clip, Vector3 pos)
        {
            if (!instance)
            {
                Debug.LogError("No Audio Manager found in the scene.");
                return;
            }

            if (instance.muteSound)
            {
                return;
            }

            if (!clip)
            {
                Debug.LogError("Clip is null");
                return;
            }

            if (instance.logSounds)
            {
                Debug.Log("Playing Audio: " + clip.name);
            }

            for (int i = 0; i < instance.pool.Count; i++)
            {
                if (!instance.pool[i].gameObject.activeInHierarchy)
                {
                    AudioSource source = instance.pool[i];
                    source.clip = clip;
                    source.transform.position = pos;
                    source.volume = instance.animalSoundVolume;
                    source.gameObject.SetActive(true);
                    source.Play();
                    instance.StartCoroutine(instance.ReturnToPool(source.gameObject, clip.length));
                    return;
                }
            }

            GameObject soundObject = new GameObject();
            soundObject.transform.SetParent(instance.transform);
            soundObject.name = "Sound Effect";
            AudioSource audioSource = soundObject.AddComponent<AudioSource>();
            audioSource.spatialBlend = 1f;
            audioSource.minDistance = instance.soundDistance;
            audioSource.volume = instance.animalSoundVolume;
            instance.pool.Add(audioSource);
            audioSource.clip = clip;
            soundObject.transform.position = pos;
            audioSource.Play();
            instance.StartCoroutine(instance.ReturnToPool(soundObject, clip.length));
        }

        private IEnumerator ReturnToPool(GameObject obj, float delay)
        {
            yield return new WaitForSeconds(delay);
            obj.SetActive(false);
        }
    }
}