using UnityEngine;

public class QuestTriggerOmar : MonoBehaviour
{
    [Tooltip("Referenz zum MarketQuestManager")]
    public MarketQuestManager questManager;
    
    [Tooltip("Referenz zum Player GameObject")]
    public GameObject player;

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log($"Object entered: {other.gameObject.name}" +
                  $"\nCollider type: {other.GetType().Name}" +
                  $"\nExpected player name: {player.name}" +
                  $"\nAre they equal?: {other.gameObject == player}" +
                  $"\nInstance IDs - Entered: {other.gameObject.GetInstanceID()}, Player: {player.GetInstanceID()}");

        if (other.gameObject == player)
        {
            Debug.Log("Player entered trigger!");
            questManager.StartMarketQuest();
        }
    }
}
