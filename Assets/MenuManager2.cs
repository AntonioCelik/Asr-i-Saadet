using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuManager2 : MonoBehaviour
{
    public GameObject baslangic;
    public GameObject yurume;
    public GameObject tutma;
    public GameObject startGame;      



    void Start()
    {
        // Başlangıçta ekstra UI elementlerini gizle
        yurume.SetActive(false);
        tutma.SetActive(false);
        startGame.SetActive(false);
    }

    public void OnExitButtonClicked()
    {
        SceneManager.LoadScene("X"); // "X" burada Exit butonuna basıldığında gidilecek sahnenin adıdır
    }

    public void OnStartButtonClicked()
    {
        yurume.SetActive(true);
        baslangic.SetActive(false);
        
    }

    public void OnContinueButtonClicked()
    {
        
        tutma.SetActive(true);
        yurume.SetActive(false);
    }
    public void OnContinue2ButtonClicked()
    {
        
        tutma.SetActive(false);
        startGame.SetActive(true);
    }
    public void OnStartGameButtonClicked()
    {
        SceneManager.LoadScene("Y"); // "Y" burada Oyuna Başla butonuna basıldığında gidilecek sahnenin adıdır
    }
}
