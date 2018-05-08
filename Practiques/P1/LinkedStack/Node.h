/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: blair
 *
 * Created on June 8, 2016, 4:39 PM
 */

#ifndef NODE_H
#define NODE_H

#include <vector>

class Node {
public:
    Node(int x);
    void setNext(Node* node);
    Node* getNext();
    int getElement();
    
private:
    
    Node* next;
    int element;
};

#endif /* NODE_H */

