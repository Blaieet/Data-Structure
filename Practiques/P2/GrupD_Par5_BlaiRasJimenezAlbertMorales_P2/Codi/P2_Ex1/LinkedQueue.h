/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on 31 / març / 2016, 09:18
 */

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include <vector>
#include <iostream>
#include "Node.h"


    using namespace std;

class LinkedQueue {
    private:
        const int MAX_QUEUE = 100; //Mida maxima de la cua
        std::vector<int> data = std::vector<int>(MAX_QUEUE); //Inicialitzo el vector
        Node *primer; //Node corresponent al primer element de la cua
        Node *ultim; //Node corresponent al ultim element de la cua
        int mida; //Enter que gestiona la mida
        
    public:
        LinkedQueue(); //Constructor
        int size(); //Metode que retorna la mida de la cua
        void enqueue(int x); //Metode que afegeix enters a la cua
        void dequeue(); //Metode que treu enters de la cua
        void show(); //Metode que imprimeix cada element de la cua
        bool full(); //La cua es plena? Cert / Fals
        bool empty(); //La cua es buida? Cert / Fals
        int first(); //Retorna el primer element afegit a la cua
        int deleteLast(Node* node);
        Node* fiirst();
        
};

#endif /* LINKEDQUEUE_H */

