using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Oyuncutakip : MonoBehaviour
{
    public Transform vrCameraRig; // VR Camera Rig'in transformu
    public float distanceInFront = 2f; // Camera Rig'in önündeki mesafe

    void Update()
    {
        // Okun veya nesnenin pozisyonunu ve rotasyonunu güncelle
        transform.position = vrCameraRig.position + vrCameraRig.forward * distanceInFront;
        transform.rotation = Quaternion.LookRotation(vrCameraRig.forward);
    }
}
