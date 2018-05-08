/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: blair
 * 
 * Created on June 8, 2016, 4:39 PM
 */

#include "Node.h"

Node::Node(int x) {
    element = x;
}

void Node::setNext(Node* n) {
    this->next = n;
}

Node* Node::getNext() {
    return next;
}

int Node::getElement() {
    return element;
}



