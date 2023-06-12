using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Win : MonoBehaviour
{
    public GameObject AnnonWin;
    void OnTriggerEnter(Collider collision)
    {
        if (collision.CompareTag("Player"))
        {
            print("WIN");
            AnnonWin.SetActive(true);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        AnnonWin.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
