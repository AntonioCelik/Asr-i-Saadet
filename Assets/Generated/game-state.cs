using UnityEngine;

[System.Serializable]
public class GameState
{
    public bool camelQuestCompleted;
    public bool horseRaceCompleted;
    public bool welcomeDialogCompleted;
    public Vector3 playerPosition;
    public Quaternion playerRotation;
    public string currentScene;
}
