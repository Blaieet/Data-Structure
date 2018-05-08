/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on 31 / març / 2016, 09:18
 */

#include "LinkedQueue.h"
#include "Node.h"

Node::Node(int x) { //Constructor que rep l'element
    info = x;
}

Node* Node::getNext() { //Retorna el seguent element
    return next;
}

void Node::setNext(Node* i) { //Assigna el seguent element
    next = i;
}

int Node::getElement() { //Obte un element
    return info;
}


