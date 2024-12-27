using UnityEngine;

[RequireComponent(typeof(MeshRenderer))]
public class HighlightPulse : MonoBehaviour
{
    [Header("Pulse Settings")]
    [Tooltip("Wie schnell soll der Effekt pulsieren")]
    public float pulseSpeed = 2f;
    
    [Tooltip("Minimale Intensität des Leuchtens")]
    public float minIntensity = 0.5f;
    
    [Tooltip("Maximale Intensität des Leuchtens")]
    public float maxIntensity = 2f;

    private Material highlightMaterial;
    private float currentPulseTime;
    
    void Start()
    {
        // Material vom Renderer holen
        highlightMaterial = GetComponent<MeshRenderer>().material;
    }

    void Update()
    {
        // Sinus-Welle für smoothe Pulsierung
        currentPulseTime += Time.deltaTime * pulseSpeed;
        float pulseValue = Mathf.Lerp(minIntensity, maxIntensity, 
            (Mathf.Sin(currentPulseTime) + 1f) * 0.5f);
        
        // Emission Intensität aktualisieren
        highlightMaterial.SetFloat("_EmissionIntensity", pulseValue);
    }

    void OnDestroy()
    {
        // Aufräumen des generierten Materials
        if(highlightMaterial != null)
            Destroy(highlightMaterial);
    }
}
