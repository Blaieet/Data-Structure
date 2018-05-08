/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedStack.cpp
 * Author: blair
 * 
 * Created on June 8, 2016, 4:38 PM
 */

#include "LinkedStack.h"
#include "Node.h"
#include <iostream>

using namespace std;


LinkedStack::LinkedStack() {
    mida = 0;
}

bool LinkedStack::empty() {
    return mida == 0;
}

bool LinkedStack::full() {
    return mida == 100;
}

int LinkedStack::size() {
    return mida;
}

void LinkedStack::push(int x) {
    if (full()) {
        cout << "Pila plena!" << endl;
    } else {
        Node* n = new Node(x);

        if (empty()) { //if ultim == null
            
            ultim = n;
            n->setNext(NULL);
            mida++;
        } else {
            n->setNext(ultim);
            mida++;
            ultim = n;
        }
        
    }
    
}

int LinkedStack::pop() {
    if (empty()) {
        cout << "Pila buida" << endl;
    } else {
        Node* temp = ultim;
        
        ultim = ultim->getNext();
        
        delete temp;
        mida--;
        
    }
}

void LinkedStack::show() {
    Node* temp = ultim;
    while(temp!=NULL) {
        cout << temp->getElement() << " ";
        temp = temp->getNext();
    }
}
     



