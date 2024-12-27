using UnityEngine;

public class CharacterAnimationController : MonoBehaviour
{
    private Animator animator;

    void Start()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        // Beispiel: Spieler läuft und redet gleichzeitig
        animator.SetBool("isWalking", Input.GetKey(KeyCode.W)); // Walking
        animator.SetBool("isTalking", Input.GetKey(KeyCode.T)); // Talking
    }
}