using UnityEngine;
using UnityEngine.AI;


public class enemigos : MonoBehaviour
{
    private float distancia;
    private bool muerto;
    private GameObject objetivo;
    private NavMeshAgent enemigo;
    public bool persigue;
    public bool ataque;
    public bool muere;
    public Animator controlEnemigo;
    // Start is called before the first frame update
    void Start()
    {
        objetivo = GameObject.Find("Jugador");
        Debug.Log("Find a Player");
        enemigo = GetComponent<NavMeshAgent>();
        enemigo.destination = objetivo.transform.position;
        muerto = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!muerto)
        {
            distancia = Vector3.Distance(objetivo.transform.position, this.transform.position);
            if (persigue)
            {
                enemigo.destination = objetivo.transform.position;
                controlEnemigo.SetBool("persigue", persigue);
                controlEnemigo.SetBool("ataque", false);
                Debug.Log(distancia);
            }
            if (distancia <= 3.1)
            {
                Debug.Log(distancia);

                enemigo.destination = this.transform.position;
                //controleEnemy.SetBool("persigue", false);
                this.transform.LookAt(new Vector3(objetivo.transform.position.x, this.transform.position.y, objetivo.transform.position.z));
                //this.transform.LookAt(objetivo.transform.position);
                controlEnemigo.SetBool("ataque", true);
                //controlEnemigo.SetBool("persigue", false);
            }
        }
        else
            enemigo.destination = this.transform.position;
    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.CompareTag("Bala"))
        {
            muerto = true;
            controlEnemigo.SetBool("persigue", false);
            controlEnemigo.SetBool("ataque", false);
            controlEnemigo.SetBool("muere", muere);
            Destroy(enemigo.gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length + 2f);
        }
    }
}
