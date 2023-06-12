using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour
{
    public GameObject enemyPrefab;
    private GameObject enemy0;
    private GameObject enemy1;
    private GameObject enemy2;
    private GameObject enemy3;

    // Update is called once per frame
    void Update()
    {
        if (enemy0 == null)
        {
            enemy0 = Instantiate(enemyPrefab) as GameObject;
        }
        if (enemy1 == null)
        {
            enemy1 = Instantiate(enemyPrefab) as GameObject;
        }
        if (enemy2 == null)
        {
            enemy2 = Instantiate(enemyPrefab) as GameObject;
        }
        if (enemy3 == null)
        {
            enemy3 = Instantiate(enemyPrefab) as GameObject;
        }
    }
}
