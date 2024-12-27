using UnityEngine;
using System.Collections;

public class VRFadeManager : MonoBehaviour
{
    [Header("Fade Settings")]
    [Tooltip("Wie schnell soll der Fade sein")]
    public float fadeDuration = 1f;
    [Tooltip("Das Material für den Fade Effect (sollte ein transparentes schwarzes Material sein)")]
    public Material fadeMaterial;
    [Tooltip("Radius der Fade-Sphere um die Kamera")]
    public float sphereRadius = 0.3f;

    private MeshRenderer fadeRenderer;
    private bool isFading = false;

    // Singleton Pattern
    private static VRFadeManager instance;
    public static VRFadeManager Instance
    {
        get { return instance; }
    }

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(this.gameObject);
            return;
        }

        instance = this;
        DontDestroyOnLoad(this.gameObject);

        CreateFadeSphere();
    }

    private void CreateFadeSphere()
    {
        // Erstelle eine Sphere die von innen sichtbar ist
        GameObject fadeSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        fadeSphere.name = "VRFadeSphere";
        fadeSphere.transform.parent = transform;
        
        // Drehe die Normalen nach innen
        Mesh mesh = fadeSphere.GetComponent<MeshFilter>().mesh;
        Vector3[] normals = mesh.normals;
        for (int i = 0; i < normals.Length; i++)
        {
            normals[i] = -normals[i];
        }
        mesh.normals = normals;

        // Drehe die Dreiecke um
        int[] triangles = mesh.triangles;
        for (int i = 0; i < triangles.Length; i += 3)
        {
            int temp = triangles[i];
            triangles[i] = triangles[i + 2];
            triangles[i + 2] = temp;
        }
        mesh.triangles = triangles;

        // Setze Material und Größe
        fadeRenderer = fadeSphere.GetComponent<MeshRenderer>();
        fadeRenderer.material = new Material(fadeMaterial);
        fadeSphere.transform.localScale = Vector3.one * sphereRadius;

        // Deaktiviere Collider
        Destroy(fadeSphere.GetComponent<Collider>());

        // Starte transparent
        SetFadeAmount(0);
    }

    private void OnEnable()
    {
        // Folge der VR Kamera
        StartCoroutine(FollowCamera());
    }

    private IEnumerator FollowCamera()
    {
        while (true)
        {
            if (Camera.main != null)
            {
                transform.position = Camera.main.transform.position;
            }
            yield return null;
        }
    }

    // Setze die Transparenz des Fade Materials
    private void SetFadeAmount(float amount)
    {
        if (fadeRenderer != null && fadeRenderer.material != null)
        {
            Color color = Color.black;
            color.a = amount;
            fadeRenderer.material.color = color;
        }
    }

    // Öffentliche Methode für Fade zu Schwarz
    public IEnumerator FadeOut()
    {
        if (isFading) yield break;
        isFading = true;

        float elapsedTime = 0f;
        while (elapsedTime < fadeDuration)
        {
            elapsedTime += Time.deltaTime;
            float fadeAmount = Mathf.Clamp01(elapsedTime / fadeDuration);
            SetFadeAmount(fadeAmount);
            yield return null;
        }

        isFading = false;
    }

    // Öffentliche Methode für Fade von Schwarz
    public IEnumerator FadeIn()
    {
        if (isFading) yield break;
        isFading = true;

        float elapsedTime = 0f;
        while (elapsedTime < fadeDuration)
        {
            elapsedTime += Time.deltaTime;
            float fadeAmount = 1f - Mathf.Clamp01(elapsedTime / fadeDuration);
            SetFadeAmount(fadeAmount);
            yield return null;
        }

        isFading = false;
    }
}
