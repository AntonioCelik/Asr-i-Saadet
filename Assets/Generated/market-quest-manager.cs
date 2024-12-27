using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MarketQuestManager : MonoBehaviour
{
    [Header("Omar Settings")]
    [Tooltip("Omar NPC GameObject")]
    public GameObject omarNPC;

    [Tooltip("Animator Komponente von Omar")]
    public Animator omarAnimator;

    [Tooltip("Wie lange Omar am Anfang stehen bleiben soll (in Sekunden)")]
    public float omarInitialWaitTime = 8f;

    [Tooltip("Wie schnell sich Omar bewegt")]
    public float omarWalkSpeed = 2f;

    [Tooltip("Ende des Marktwegs wo Omar hingehen soll")]
    public Transform marketEndPoint;

    [Header("Market NPCs")]
    [Tooltip("Liste der Händler NPCs die sich zur Moschee bewegen sollen")]
    public List<GameObject> merchantNPCs = new List<GameObject>();

    [Tooltip("Liste der Kunden NPCs die sich zur Moschee bewegen sollen")]
    public List<GameObject> customerNPCs = new List<GameObject>();

    [Header("Movement Settings")]
    [Tooltip("Wie schnell sich die NPCs bewegen")]
    public float npcMoveSpeed = 2f;

    [Tooltip("Der Transform der Moschee als Zielpunkt")]
    public Transform mosqueTarget;

    [Tooltip("Wie nah müssen NPCs ans Ziel kommen")]
    public float arrivalDistance = 0.5f;

    [Header("Dialog & Audio Settings")]
    [Tooltip("Referenz zum DialogManager")]
    public DialogManager dialogManager;

    [Tooltip("Dialog-ID für Omars erste Ansprache")]
    public string omarDialogID = "omar_market";

    [Tooltip("Dialog-ID für den Muezzin Ruf")]
    public string muezzinCallID = "muezzin_call";

    [Tooltip("Dialog-ID für Omars Aufforderung zur Moschee")]
    public string omarMosqueID = "omar_mosque";

    [Tooltip("AudioSource für den Muezzin-Ruf (sollte räumlich sein)")]
    public AudioSource muezzinAudioSource;

    [Header("Animation Parameters")]
    [Tooltip("Name des Walking Animation Parameters")]
    public string walkingAnimParam = "isWalking";

    [Tooltip("Name des Talking Animation Parameters")]
    public string talkingAnimParam = "isTalking";

    [Header("Quest Triggers")]
    [Tooltip("Der Trigger der den Market Dialog startet")]
    public BoxCollider marketTrigger;

    [Tooltip("Referenz zum Player GameObject")]
    public GameObject player;

    private bool questStarted = false;
    private bool npcsMoving = false;
    private List<Vector3> npcStartPositions = new List<Vector3>();
    private List<Quaternion> npcStartRotations = new List<Quaternion>();

    void Start()
    {
        // Speichere die Startpositionen aller NPCs
        foreach (var merchant in merchantNPCs)
        {
            npcStartPositions.Add(merchant.transform.position);
            npcStartRotations.Add(merchant.transform.rotation);
        }
        foreach (var customer in customerNPCs)
        {
            npcStartPositions.Add(customer.transform.position);
            npcStartRotations.Add(customer.transform.rotation);
        }

        // Stelle sicher dass der Muezzin-Ruf räumlich klingt
        if (muezzinAudioSource != null)
        {
            muezzinAudioSource.spatialBlend = 1f; // 3D Sound
            muezzinAudioSource.rolloffMode = AudioRolloffMode.Linear;
            muezzinAudioSource.minDistance = 5f;
            muezzinAudioSource.maxDistance = 50f;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // Prüfe ob der Player den Trigger auslöst
        if (!questStarted && other.gameObject == player)
        {
            StartMarketQuest();
        }
    }

    public void StartMarketQuest()
    {
        if (questStarted) return;

        questStarted = true;
        StartCoroutine(MarketQuestSequence());
    }

    private IEnumerator MarketQuestSequence()
    {
        // Deaktiviere den Trigger
        if (marketTrigger != null)
            marketTrigger.enabled = false;

        // Aktiviere Omars Talking Animation
        if (omarAnimator != null)
        {
            omarAnimator.SetBool(talkingAnimParam, true);
        }

        // Start Omars ersten Dialog
        if (dialogManager != null)
        {
            dialogManager.StartDialogGroup(omarDialogID);
        }

        // Warte die initiale Zeit
        yield return new WaitForSeconds(omarInitialWaitTime);

        // Starte Omars Bewegung zum Marktende
        StartCoroutine(MoveOmarToMarketEnd());

        // Warte bis der erste Dialog beendet ist
        while (dialogManager != null && dialogManager.IsDialogPlaying())
            yield return null;

        // Spiele den Muezzin Ruf ab
        if (muezzinAudioSource != null)
        {
            AudioClip muezzinClip = LocalizationManager.Instance.GetAudio(muezzinCallID);
            if (muezzinClip != null)
            {
                muezzinAudioSource.clip = muezzinClip;
                muezzinAudioSource.Play();
            }
        }

        // Warte 2 Sekunden
        yield return new WaitForSeconds(2f);

        // Starte Omars zweiten Dialog während der Muezzin noch ruft
        if (dialogManager != null)
        {
            dialogManager.StartDialogGroup(omarMosqueID);
        }

        // Starte die Bewegung aller NPCs zur Moschee
        StartCoroutine(MoveNPCsToMosque());
    }

    private IEnumerator MoveOmarToMarketEnd()
    {
        if (omarNPC == null || marketEndPoint == null) yield break;

        // Aktiviere Walking Animation
        if (omarAnimator != null)
        {
            omarAnimator.SetBool(walkingAnimParam, true);
        }

        while (Vector3.Distance(omarNPC.transform.position, marketEndPoint.position) > arrivalDistance)
        {
            // Berechne Richtung zum Ziel
            Vector3 direction = (marketEndPoint.position - omarNPC.transform.position).normalized;
            direction.y = 0; // Ignoriere Y-Achse

            // Bewege Omar
            omarNPC.transform.position += direction * omarWalkSpeed * Time.deltaTime;

            // Drehe Omar in Bewegungsrichtung
            if (direction != Vector3.zero)
            {
                omarNPC.transform.rotation = Quaternion.Lerp(
                    omarNPC.transform.rotation,
                    Quaternion.LookRotation(direction),
                    Time.deltaTime * 5f
                );
            }

            yield return null;
        }

        // Deaktiviere Walking Animation am Ziel
        if (omarAnimator != null)
        {
            omarAnimator.SetBool(walkingAnimParam, false);
        }
    }

    private IEnumerator MoveNPCsToMosque()
    {
        if (mosqueTarget == null)
        {
            Debug.LogError("Kein Moschee-Zielpunkt definiert!");
            yield break;
        }

        npcsMoving = true;

        // Kombiniere alle NPCs in eine Liste für die Bewegung
        List<GameObject> allNPCs = new List<GameObject>();
        allNPCs.AddRange(merchantNPCs);
        allNPCs.AddRange(customerNPCs);

        // Bewege NPCs bis alle am Ziel sind
        while (npcsMoving)
        {
            bool allNPCsArrived = true;

            foreach (var npc in allNPCs)
            {
                if (npc == null) continue;

                // Berechne Richtung zur Moschee
                Vector3 directionToMosque = (mosqueTarget.position - npc.transform.position).normalized;
                directionToMosque.y = 0;

                // Prüfe ob NPC schon nah genug am Ziel ist
                if (Vector3.Distance(npc.transform.position, mosqueTarget.position) > arrivalDistance)
                {
                    // Bewege NPC
                    npc.transform.position += directionToMosque * npcMoveSpeed * Time.deltaTime;

                    // Drehe NPC in Bewegungsrichtung
                    if (directionToMosque != Vector3.zero)
                    {
                        npc.transform.rotation = Quaternion.Lerp(
                            npc.transform.rotation,
                            Quaternion.LookRotation(directionToMosque),
                            Time.deltaTime * 5f
                        );
                    }

                    allNPCsArrived = false;
                }
            }

            if (allNPCsArrived)
            {
                npcsMoving = false;
            }

            yield return null;
        }
    }

    // Methode zum Zurücksetzen der Quest (falls nötig)
    public void ResetQuest()
    {
        questStarted = false;
        npcsMoving = false;

        if (marketTrigger != null)
            marketTrigger.enabled = true;

        // Stoppe alle Coroutinen
        StopAllCoroutines();

        // Reset Omar's Animationen
        if (omarAnimator != null)
        {
            omarAnimator.SetBool(walkingAnimParam, false);
            omarAnimator.SetBool(talkingAnimParam, false);
        }

        // Setze alle NPCs zurück auf Startposition
        for (int i = 0; i < merchantNPCs.Count; i++)
        {
            if (merchantNPCs[i] != null)
            {
                merchantNPCs[i].transform.position = npcStartPositions[i];
                merchantNPCs[i].transform.rotation = npcStartRotations[i];
            }
        }
        for (int i = 0; i < customerNPCs.Count; i++)
        {
            if (customerNPCs[i] != null)
            {
                int index = i + merchantNPCs.Count;
                customerNPCs[i].transform.position = npcStartPositions[index];
                customerNPCs[i].transform.rotation = npcStartRotations[index];
            }
        }
    }
}