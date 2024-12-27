using UnityEngine;
using Autohand;
using System.Collections.Generic;
using UnityEngine.Events;
using TMPro;
using System.Collections;

public class CamelQuestManager : MonoBehaviour
{
    [System.Serializable]
    public class SackPlacementSpot
    {
        public Transform placementPoint;
        public GameObject highlightEffect;
        public bool isOccupied;
        [Tooltip("Das Kamel zu dem dieser Platzierungspunkt gehört")]
        public GameObject camel;
    }

    [Header("Quest Objects")]
    public List<SackPlacementSpot> placementSpots;
    public List<Grabbable> sacks;
    public float placementRadius = 0.3f;

    [Header("Visual Effects")]
    public List<GameObject> sackHighlights;

    [Header("Dialog Settings")]
    public DialogManager dialogManager;
    [Tooltip("Dialog wenn Osman die Quest anbietet")]
    public string questOfferDialogID;
    [Tooltip("Dialog wenn der Spieler die Quest ablehnt")]
    public string questRejectDialogID;
    [Tooltip("Dialog wenn der Spieler die Quest annimmt - Erklärungen")]
    public string questAcceptDialogID;
    [Tooltip("Abschluss-Dialog nach erfolgreichem Beenden")]
    public string questCompleteDialogID;

    [Header("Osman Settings")]
    public Animator osmanAnimator;
    public NPCFollower osmanFollower;
    

    [Header("Boundary Settings")]
    [Tooltip("BoxCollider der den Spielbereich begrenzt")]
    public BoxCollider boundaryCollider;
    [Tooltip("Text der erscheint wenn Spieler Bereich verlassen will")]
    public TextMeshProUGUI warningText;
    [Tooltip("Wie lange soll die Warnung angezeigt werden")]
    public float warningDisplayTime = 3f;

    [Header("UI Elements")]
    public GameObject questChoiceButtons;  // Parent GameObject der beiden Buttons

    [Header("Caravan Settings")]
    [Tooltip("Liste der CaravanPathFollower Komponenten der Kamele")]
    public List<CaravanPathFollower> caravanFollowers = new List<CaravanPathFollower>();

    [Header("Quest Events")]
    public UnityEvent onQuestStart;
    public UnityEvent onQuestComplete;

    [Header("References")]
    public GameObject player;  // Der Player
    public SphereCollider dialogTriggerZone;  // Der Trigger um Osman herum

    // Private Variables für Quest-Status
    private int placedSacks = 0;
    private bool questActive = false;
    private bool questOffered = false;
    private bool dialogActive = false;
    private Grabbable currentlyHeldSack;
    private float warningTimer = 0f;

    void Start()
    {
        // Initial alles ausschalten
        SetAllHighlightsActive(false);
        SetPlacementHighlightsActive(false);
        if (boundaryCollider != null)
            boundaryCollider.enabled = false;
        if (warningText != null)
            warningText.enabled = false;
        if (questChoiceButtons != null)
            questChoiceButtons.SetActive(false);
    }

    void Update()
    {
        // Warning Text Timer
        if (warningTimer > 0)
        {
            warningTimer -= Time.deltaTime;
            if (warningTimer <= 0 && warningText != null)
                warningText.enabled = false;
        }
    }

    public void StartQuestDialog()
    {
        // NEU: Prüfe ob bereits ein Dialog läuft
        if (dialogActive)
            return;

        if (!questOffered && !questActive)
        {
            questOffered = true;
            dialogActive = true;

            // Aktiviere Talking Animation
            if (osmanAnimator != null)
                osmanAnimator.SetBool("isTalking", true);

            dialogManager.StartDialogGroup(questOfferDialogID);

            // NEU: Dialog-Status nach Dialog zurücksetzen
            StartCoroutine(WaitForDialogToEnd());
        }
    }

    // NEU: Coroutine die wartet bis der Dialog endet
    private IEnumerator WaitForDialogToEnd()
    {
        while (dialogManager.IsDialogPlaying())
            yield return null;

        dialogActive = false;
    }

    // Quest wurde angenommen
    public void AcceptQuest()
    {
        questActive = true;

        if (questChoiceButtons != null)
            questChoiceButtons.SetActive(false);

        // Aktiviere Boundary
        if (boundaryCollider != null)
            boundaryCollider.enabled = true;

        // Starte Erklärungs-Dialog
        dialogManager.StartDialogGroup(questAcceptDialogID);

        // Aktiviere die Highlights für die Säcke
        SetAllHighlightsActive(true);

        onQuestStart.Invoke();

        // Registriere die Grab-Events für alle Säcke
        foreach (var sack in sacks)
        {
            sack.OnGrabEvent += OnSackGrabbed;
            sack.OnReleaseEvent += OnSackReleased;
        }
    }

    // Quest wurde abgelehnt
    public void RejectQuest()
    {
        if (questChoiceButtons != null)
            questChoiceButtons.SetActive(false);

        questOffered = false;
        dialogManager.StartDialogGroup(questRejectDialogID);
    }

    void OnSackGrabbed(Hand hand, Grabbable sack)
    {
        if (!questActive) return;

        currentlyHeldSack = sack;

        // Deaktiviere alle Highlight Effekte zuerst
        SetAllHighlightsActive(false);
        // Zeige nur die Placement Point Highlights
        SetPlacementHighlightsActive(true);
    }

    void OnSackReleased(Hand hand, Grabbable sack)
    {
        if (!questActive) return;

        currentlyHeldSack = null;

        foreach (var spot in placementSpots)
        {
            if (!spot.isOccupied && Vector3.Distance(sack.transform.position, spot.placementPoint.position) < placementRadius)
            {
                PlaceSack(sack, spot);
                return;
            }
        }

        // Wenn der Sack nicht platziert wurde, schalte alle Placement Highlights aus
        SetPlacementHighlightsActive(false);
        // Zeige wieder die Sack-Highlights
        SetAllHighlightsActive(true);
    }

    void SetAllHighlightsActive(bool active)
    {
        foreach (var highlight in sackHighlights)
        {
            if (highlight != null)
                highlight.SetActive(active);
        }
    }

    void SetPlacementHighlightsActive(bool active)
    {
        foreach (var spot in placementSpots)
        {
            if (!spot.isOccupied && spot.highlightEffect != null)
                spot.highlightEffect.SetActive(active);
        }
    }

    void PlaceSack(Grabbable sack, SackPlacementSpot spot)
    {
        spot.isOccupied = true;
        placedSacks++;

        // Deaktiviere Physik
        if (sack.TryGetComponent<Rigidbody>(out var rb))
        {
            rb.isKinematic = true; // Deaktiviert Physik-Simulation
            rb.useGravity = false; // Deaktiviert Gravitation
        }

        // Positioniere den Sack
        sack.transform.position = spot.placementPoint.position;
        sack.transform.rotation = spot.placementPoint.rotation;

        // Setze den Sack als Child des Kamels wenn eines zugewiesen ist
        if (spot.camel != null)
        {
            sack.transform.parent = spot.camel.transform;
        }

        // Deaktiviere Placement Point Highlight
        if (spot.highlightEffect != null)
            spot.highlightEffect.SetActive(false);

        // Zerstöre das Highlight statt es nur zu deaktivieren
        int sackIndex = sacks.IndexOf(sack);
        if (sackIndex >= 0 && sackIndex < sackHighlights.Count)
        {
            Destroy(sackHighlights[sackIndex]); // Highlight komplett zerstören
            sackHighlights[sackIndex] = null;   // Referenz auf null setzen
        }

        // Deaktiviere die Grab-Komponente
        sack.enabled = false;

        // Prüfe ob Quest abgeschlossen
        if (placedSacks >= placementSpots.Count)
        {
            QuestComplete();
        }
        else
        {
            // Aktiviere nur die Highlights von nicht platzierten Säcken wenn sie noch existieren
            for (int i = 0; i < sacks.Count; i++)
            {
                if (sacks[i].enabled && sackHighlights[i] != null)
                {
                    sackHighlights[i].SetActive(true);
                }
            }
        }
    }

    void QuestComplete()
    {
        questActive = false;
        SetAllHighlightsActive(false);
        SetPlacementHighlightsActive(false);

        // Deaktiviere Boundary
        if (boundaryCollider != null)
            boundaryCollider.enabled = false;

        // Aktiviere Bravo Animation
        if (osmanAnimator != null)
        {
            osmanAnimator.SetBool("bravo", true);
            Invoke("ResetBravoAnimation", 2f);
        }

        // Starte Abschluss-Dialog
        dialogManager.StartDialogGroup(questCompleteDialogID);

        // Warte bis Dialog fertig ist und starte dann Bewegung
        StartCoroutine(CompleteQuestSequence());
    }

    private IEnumerator CompleteQuestSequence()
    {
        // Warte bis Dialog fertig
        while (dialogManager.IsDialogPlaying())
            yield return null;

        // Starte sofort Osman's Bewegung
        if (osmanAnimator != null)
            osmanAnimator.SetBool("isWalking", true);

        // Starte sofort die Karawanen-Bewegung
        foreach (var follower in caravanFollowers)
        {
            if (follower != null)
                follower.StartMoving();
        }

        if (osmanFollower != null)
            osmanFollower.StartMoving();

        // Warte 20 Sekunden während sie sich bewegen
        yield return new WaitForSeconds(20f);

        // JETZT erst Quest als abgeschlossen markieren und Objekte deaktivieren
        if (QuestStateManager.Instance != null)
        {
            QuestStateManager.Instance.CompleteCamelQuest();
        }
    }

    System.Collections.IEnumerator WaitForDialogAndMove()
    {
        // Warte bis Dialog fertig
        while (dialogManager.IsDialogPlaying())
            yield return null;

        // Starte Osman's Bewegung
        if (osmanAnimator != null)
            osmanAnimator.SetBool("isWalking", true);

        // Starte die Karawanen-Bewegung
        foreach (var follower in caravanFollowers)
        {
            if (follower != null)
                follower.StartMoving();
        }

        if (osmanFollower != null)
            osmanFollower.StartMoving();
    }

    void ResetBravoAnimation()
    {
        if (osmanAnimator != null)
            osmanAnimator.SetBool("bravo", false);
    }

    // Zeige Warnung wenn Spieler Bereich verlässt
    public void ShowBoundaryWarning()
    {
        if (warningText != null)
        {
            warningText.enabled = true;
            warningTimer = warningDisplayTime;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // Ist es der Player der in den Trigger kommt?
        if (other.gameObject == player)
        {
            Debug.Log("Player entered a trigger"); // Debug-Ausgabe

            // Sind wir im Dialog-Trigger von Osman?
            if (gameObject.GetComponent<Collider>() == dialogTriggerZone)
            {
                Debug.Log("Player entered Osman's dialog zone"); // Debug-Ausgabe
                if (!questOffered && !questActive)
                {
                    StartQuestDialog();
                }
            }
            else if (gameObject.GetComponent<Collider>() == boundaryCollider)
            {
                if (questActive)
                {
                    ShowBoundaryWarning();
                }
            }
        }
    }

    

    private void OnDestroy()
    {
        if (sacks != null)
        {
            foreach (var sack in sacks)
            {
                if (sack != null)
                {
                    sack.OnGrabEvent -= OnSackGrabbed;
                    sack.OnReleaseEvent -= OnSackReleased;
                }
            }
        }
    }
}