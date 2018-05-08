
/* 
 * File:   ArrayQueue.h
 * Author: Blai Ras i Albert Morales
 *
 * Created on March 23, 2016, 8:30 PM
 */

#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <vector>
#include <string>
#include <iostream>
using namespace std;


class ArrayQueue {
    private: //Atributs Privats
        const int MAX_QUEUE = 100; //Capacitat maxima de la cua
        std::vector<int> data = std::vector<int>(MAX_QUEUE); //Defineixo el vector
        int primer; //Index corresponent al primer element de la cua
        int ultim; //Index corresponent al últim element de la cua
        int n; //Enter corresponent al número d'elements afegits
    public:
        ArrayQueue(); //Constructor
        void enqueue(int x); //Metode que coloca un numero al final
        int dequeue(); //Elimina el primer element de la cua i el retorna
        int front(); //Retorna el primer element de la cua
        int size(); //Metode que em retorna el número d'elements afegits
        bool empty(); //Boolea que m'indica si la pila està buida
        bool full(); //Boolea que m'indica si la pila està plena
        void print(); //Metode que m'imprimeix tots els elements de la cua
        void pillaText(string fitxer);
        
};


#endif /* ARRAYQUEUE_H */

