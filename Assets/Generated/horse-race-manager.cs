using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;
using System.Collections;
using MalbersAnimations.Controller;

public class HorseRaceManager : MonoBehaviour
{
    [Header("Pferd Referenzen")]
    [Tooltip("Der MAnimal Controller des Spieler-Pferdes")]
    public MAnimal playerHorse;

    [Header("VR Controller")]
    [Tooltip("Position der linken Hand")]
    public Transform leftHandTransform;
    [Tooltip("Position der rechten Hand")]
    public Transform rightHandTransform;
    [Tooltip("Minimale Bewegung für Sprint-Aktivierung")]
    public float minSprintMovement = 0.1f;
    [Tooltip("Wie schnell der Sprint aufbaut")]
    public float sprintBuildupSpeed = 1f;
    [Tooltip("Wie schnell der Sprint abnimmt")]
    public float sprintDecaySpeed = 0.5f;
    [Tooltip("Ab welchem Wert wird Sprint aktiviert")]
    public float sprintThreshold = 0.7f;

    [Header("UI Elemente")]
    [Tooltip("Text für den Countdown")]
    public TextMeshProUGUI countdownText;
    [Tooltip("Text für die Zeitanzeige")]
    public TextMeshProUGUI timeText;
    [Tooltip("Panel das bei Sieg angezeigt wird")]
    public GameObject victoryPanel;
    [Tooltip("Panel das bei Niederlage angezeigt wird")]
    public GameObject defeatPanel;
    [Tooltip("Panel mit den Ende/Neustart Buttons")]
    public GameObject endRacePanel;

    [Header("Effekte")]
    [Tooltip("Partikeleffekt für den Sieg")]
    public ParticleSystem victoryEffect;

    [Header("AI")]
    [Tooltip("Das GameObject das die KI Pferd Bewegung steuert")]
    public GameObject aiPathController;
    [Tooltip("Referenz zum KI Pferd GameObject")]
    public GameObject aiHorse;

    [Header("Trigger Collider")]
    [Tooltip("Zielbereich Collider (wird von Spieler und KI geteilt)")]
    public Collider finishCollider;

    [Header("Events")]
    public UnityEvent onRaceStart;
    public UnityEvent onRaceEnd;
    public UnityEvent onVictory;
    public UnityEvent onDefeat;

    
  

    // Private Variablen
    private bool isRacing = false;
    private float raceTimer = 0f;
    private float currentSprintValue = 0f;
    private bool raceFinished = false;
    private Vector3 lastLeftHandPos;
    private Vector3 lastRightHandPos;

    private void Start()
    {
        // Initialisierung der UI
        if (victoryPanel) victoryPanel.SetActive(false);
        if (defeatPanel) defeatPanel.SetActive(false);
        if (endRacePanel) endRacePanel.SetActive(false);

        // Initialisiere Handpositionen
        if (leftHandTransform != null)
            lastLeftHandPos = leftHandTransform.position;
        if (rightHandTransform != null)
            lastRightHandPos = rightHandTransform.position;

        // Deaktiviere Pferde-Bewegung
        DisableHorseMovement();

        // AI Path Controller deaktivieren
        if (aiPathController)
            aiPathController.SetActive(false);

        // Starte Countdown
        StartCoroutine(StartCountdown());
    }

    private void Update()
    {
        if (isRacing && !raceFinished)
        {
            // Update Timer
            raceTimer += Time.deltaTime;
            UpdateTimeDisplay();

            // Überprüfe Sprint-Input
            HandleSprintInput();
        }
    }

    private void HandleSprintInput()
    {
        // Verwenden Sie Smoothing für die Handpositionen
        Vector3 currentLeftHandPos = leftHandTransform.position;
        Vector3 currentRightHandPos = rightHandTransform.position;

        // Weichere Geschwindigkeitsberechnung
        Vector3 smoothLeftVelocity = Vector3.Lerp(
            (currentLeftHandPos - lastLeftHandPos) / Time.deltaTime,
            currentLeftHandPos - lastLeftHandPos,
            0.5f
        );

        Vector3 smoothRightVelocity = Vector3.Lerp(
            (currentRightHandPos - lastRightHandPos) / Time.deltaTime,
            currentRightHandPos - lastRightHandPos,
            0.5f
        );

        // Speichere aktuelle Positionen für nächsten Frame
        lastLeftHandPos = currentLeftHandPos;
        lastRightHandPos = currentRightHandPos;

        // Nutze nur die vertikale Bewegung (Y-Achse)
        float movement = Mathf.Abs(smoothLeftVelocity.y + smoothRightVelocity.y);

        if (movement > minSprintMovement)
        {
            // Erhöhe Sprint graduell
            currentSprintValue = Mathf.Min(1f, currentSprintValue + sprintBuildupSpeed * Time.deltaTime);
        }
        else
        {
            // Reduziere Sprint graduell
            currentSprintValue = Mathf.Max(0f, currentSprintValue - sprintDecaySpeed * Time.deltaTime);
        }

        // Setze Sprint-Wert im Malbers System
        if (playerHorse != null)
            playerHorse.Sprint = currentSprintValue >= sprintThreshold;
    }

    private IEnumerator StartCountdown()
    {
        // 3 Sekunden Countdown
        for (int i = 3; i > 0; i--)
        {
            countdownText.text = i.ToString();
            yield return new WaitForSeconds(1f);
        }

        countdownText.text = LocalizationManager.Instance.GetText("countdown_go");
        StartRace();

        yield return new WaitForSeconds(1f);
        countdownText.gameObject.SetActive(false);
    }

    private void StartRace()
    {
        // Aktiviere das AI Path Controller GameObject
        if (aiPathController != null)
            aiPathController.SetActive(true);

        isRacing = true;
        raceTimer = 0f;
        EnableHorseMovement();
        onRaceStart.Invoke();
    }

    private void UpdateTimeDisplay()
    {
        int minutes = (int)(raceTimer / 60f);
        int seconds = (int)(raceTimer % 60f);
        int milliseconds = (int)((raceTimer * 100f) % 100f);
        timeText.text = string.Format("{0:00}:{1:00}.{2:00}", minutes, seconds, milliseconds);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (raceFinished) return;

        Debug.Log($"Trigger detected with: {other.gameObject.name}, Tag: {other.gameObject.tag}");

        if (other.gameObject.CompareTag("PlayerHorse"))
        {
            Debug.Log("Player Horse detected at finish line!");
            raceFinished = true;
            isRacing = false;
            ShowVictory();
            DisableHorseMovement();
            endRacePanel.SetActive(true);
            onRaceEnd.Invoke();
        }
        else if (other.gameObject.CompareTag("AIHorse"))
        {
            Debug.Log("AI Horse detected at finish line!");
            raceFinished = true;
            isRacing = false;
            ShowDefeat();
            DisableHorseMovement();
            endRacePanel.SetActive(true);
            onRaceEnd.Invoke();
        }
    }

    public void HandleFinishLineTrigger(GameObject horse)
    {
        if (raceFinished) return;

        Debug.Log($"Handling Finish Line for: {horse.name}, Tag: {horse.tag}");

        if (horse.CompareTag("PlayerHorse"))
        {
            raceFinished = true;
            isRacing = false;
            ShowVictory();
            DisableHorseMovement();
            endRacePanel.SetActive(true);
            onRaceEnd.Invoke();
        }
        else if (horse.CompareTag("AIHorse"))
        {
            raceFinished = true;
            isRacing = false;
            ShowDefeat();
            DisableHorseMovement();
            endRacePanel.SetActive(true);
            onRaceEnd.Invoke();
        }
    }

    public void ShowVictory()
    {
        Debug.Log("Spieler gewinnt!");
        victoryPanel.SetActive(true);
        if (victoryEffect) victoryEffect.Play();
        DisableHorseMovement();
        endRacePanel.SetActive(true);

        // Informiere den QuestStateManager
        if (QuestStateManager.Instance != null)
        {
            QuestStateManager.Instance.CompleteHorseRace();
        }

        onVictory.Invoke();
    }

    private void ShowDefeat()
    {
        Debug.Log("Zubeyr gewinnt!");
        defeatPanel.SetActive(true);
        onDefeat.Invoke();
    }

    private void EnableHorseMovement()
    {
        if (playerHorse) playerHorse.enabled = true;
    }

    private void DisableHorseMovement()
    {
        if (playerHorse) playerHorse.enabled = false;
    }

    // Button Event Handler
    public void OnRestartClicked()
    {
        RestartRace();
    }

    public void OnExitClicked()
    {
        if (SceneTransitionManager.Instance != null)
        {
            // Stelle sicher dass der Quest-Status gesetzt ist
            if (QuestStateManager.Instance != null && !QuestStateManager.Instance.IsHorseRaceCompleted())
            {
                QuestStateManager.Instance.CompleteHorseRace();
            }

            SceneTransitionManager.Instance.EndRace();
        }
    }

    public void RestartRace()
    {
        // Reset alles
        raceFinished = false;
        currentSprintValue = 0f;

        // UI Reset
        victoryPanel.SetActive(false);
        defeatPanel.SetActive(false);
        endRacePanel.SetActive(false);
        countdownText.gameObject.SetActive(true);

        // Setze Pferde zur Startposition
        if (SceneTransitionManager.Instance != null)
        {
            SceneTransitionManager.Instance.StartRace(playerHorse.transform);
        }

        // Starte neuen Countdown
        StartCoroutine(StartCountdown());
    }
}