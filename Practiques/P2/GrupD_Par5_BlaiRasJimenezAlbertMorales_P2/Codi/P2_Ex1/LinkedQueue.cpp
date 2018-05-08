/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on 31 / març / 2016, 09:18
 */

#include <iostream>
#include "Node.h"
#include "LinkedQueue.h"


    LinkedQueue::LinkedQueue() { //Constructor
        primer = NULL;
        ultim = NULL;
        mida=0;
    }
    
    void LinkedQueue::enqueue(int x) { 
        //New Node
        Node *node = new Node(x); //Nou node amb l'element passat
        
        node->info = x; //Obte la informacio d'aquest nou element

        node->next = NULL; //Assinga el node del nou element

        if(primer == NULL){ //Si no tinc cap element a la cua...

            primer = node; //Assinga el node que lliga el primer element
            mida++; //Incrementa la mida de la cua

        }else{

            ultim->next = node; //Assinga el node que lliga l'element
            mida++;

        }

        ultim = node; //Assinga el seguent node
        
    }
    
    int LinkedQueue::size() {
        return mida; //Retorna la mida
    }
    
    bool LinkedQueue::empty() {
        return (mida == 0); 
    }
    
    bool LinkedQueue::full() {
        return (mida = 100);
    }
    
    int LinkedQueue::first() {
        return primer->info; //Retorna el primer element
    }
    
    void LinkedQueue::dequeue() {
        Node *temp = new Node(primer->getElement()); //Crea un nou node temporal
        if(primer == NULL){

            cout<<"\nLa cua es buida!\n";

        }else{

            temp = primer; //Aquest nou node asignali al seguent element a eliminar

            primer = primer->next; //Fes l'enllas amb l'element seguent d'aquest
            
            mida--; //Decrementa la mida
            

            delete temp; //Esborra aquest node

        }
    }
    
    void LinkedQueue::show() {

        Node *p; //Crea un nou node per recorre la cua

        p = primer; //Inicial al primer element
        
        if(primer == NULL){//Comprova si esta buida

            cout<<"\nLa cua es buida!\n";

        }else{

            while(p!=NULL){ //Mentre hi hagi elements

                cout<<endl<<p->info; //Imprimeixlos

                p = p->next; //Ves al seguent element

            }

        }
    }
    
    int LinkedQueue::deleteLast(Node* previous) {
        if (primer == NULL) {
            cout << "CUA BUIDA" << endl;
            
        } else {
            
            if (previous->next == ultim) {
                ultim = previous;
                previous->next = NULL;
                Node* last = previous->next;
                delete last;
            } else {
                deleteLast(previous->next);
            }
        }
    }
    
    Node* LinkedQueue::fiirst() {
        return primer;
    }
 
    
    


