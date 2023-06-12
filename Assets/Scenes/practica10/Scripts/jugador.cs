using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class jugador : MonoBehaviour
{
    private float timer;
    [SerializeField] private Text textTimer;
    public Transform posArma;
    public GameObject bala;
    public float fuerza;
    // Start is called before the first frame update
    void Start()
    {
        timer = 600;
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One) || Input.GetKeyDown(KeyCode.M)) { 
            var balas = Instantiate(bala, posArma.position, Quaternion.identity);
            var rb = balas.GetComponent<Rigidbody>();
            rb.AddForce(posArma.transform.forward*fuerza, ForceMode.Impulse);
        }

        if (timer <= 0)
        {
            transform.position = new Vector3(2.44f, 0.92f, -6.31f);
            timer = 600;
        }
        else
        {
            timer -= Time.deltaTime;
            textTimer.text = "" + timer.ToString("f2");
        }
    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.CompareTag("Push"))
        {
            transform.position = new Vector3(2.44f, 0.92f, -6.31f);
            
        }
    }
}