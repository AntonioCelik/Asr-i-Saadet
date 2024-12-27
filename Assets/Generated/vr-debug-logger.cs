using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class VRDebugLogger : MonoBehaviour
{
    [Header("UI Settings")]
    [Tooltip("Das TextMeshPro Text Element für die Debug Ausgabe")]
    public TextMeshProUGUI debugText;
    
    [Tooltip("Maximale Anzahl der Zeilen die angezeigt werden")]
    public int maxLines = 10;

    // Singleton Pattern
    private static VRDebugLogger instance;
    public static VRDebugLogger Instance { get { return instance; } }

    private Queue<string> logLines = new Queue<string>();

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void LogInfo(string message)
    {
        AddLogLine($"[INFO] {message}");
    }

    public void LogError(string message)
    {
        AddLogLine($"[ERROR] {message}");
    }

    private void AddLogLine(string line)
    {
        logLines.Enqueue($"{Time.time:F1}s: {line}");
        while (logLines.Count > maxLines)
        {
            logLines.Dequeue();
        }
        UpdateDebugText();
    }

    private void UpdateDebugText()
    {
        if (debugText != null)
        {
            debugText.text = string.Join("\n", logLines);
        }
    }
}
