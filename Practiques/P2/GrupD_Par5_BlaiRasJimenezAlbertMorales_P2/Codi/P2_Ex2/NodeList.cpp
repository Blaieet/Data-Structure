/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeList.cpp
 * Author: Albert
 * 
 * Created on 20 de abril de 2016, 19:58
 */
#include "DoubleNode.h"
#include "NodeList.h"
#include <iostream>
 
using namespace std;

NodeList::NodeList() {
    first = NULL;
    last = NULL;
    pi = NULL;
    listSize = 0;
}

NodeList::~NodeList() {
}

bool NodeList::empty() {
    return listSize == 0;
}

int NodeList::size() {
    return listSize;
}

int NodeList::get() {
    return pi->getElement();
}

void NodeList::insert(int e) {
     
    DoubleNode* node = new DoubleNode(e);
  
    if(pi == NULL) {
        pi = node;
        first = node;
        last = node;
    }else if (pi == last) {
        node->prev = last;
        node->next = NULL;
        last->next = node;
        last = node;
    }else if (pi == first) {
        node->prev = first;
        node->next = first->next;
        DoubleNode *n1 = first->next;
        n1->prev = node;
        first->next = node;
    }else{
        DoubleNode* n1 = pi;
        DoubleNode* n2 = pi->next;
        
        node->next = n2;
        node->prev = n1;
        n1->next = node;
        n2->prev = node;
    }

    listSize++;
}

void NodeList::remove() {
    
    if (!empty()){
        if (pi == first) {
            DoubleNode* n1 = pi->next;
            pi = n1;
            first = n1;
            delete n1->prev;
            n1->prev = NULL;
        } else if (pi == last) {
            pi = pi->prev;
            last = pi;
            delete pi->next;
            pi->next = NULL;
        } else if(size() == 1) {
            first = NULL;
            last = NULL;
            delete pi;
            pi = NULL;
        } else {
            DoubleNode* p1 = pi->prev;
            DoubleNode* p2 = pi->next;
            p2->prev = p1;
            p1->next = p2;
            delete pi;
            pi = p1;
        }
        listSize--;
    }else {
        cout << "La llista ja esta buida LAMMER " << endl;
    }
}

void NodeList::modify(int e) {
    this->pi->setElement(e);
}

void NodeList::begin() {
    this->pi = first;
}

bool NodeList::end() {
    return pi == last;
}

void NodeList::next() {
    this->pi = pi->getNext();
}

void NodeList::show() {
    
    DoubleNode *node = first;
 
    if(first == NULL){
        cout<<"\nNothing to Display\n";
    }else{
        while(node != NULL){
            cout <<  node->getElement() << endl;
            node = node->next;
        }
    }
}

DoubleNode* NodeList::find(int num) {
    DoubleNode* nodeNum = NULL;
    
    while(nodeNum != NULL) {
        if (nodeNum->getElement() == num) {
            return nodeNum;
        }
        nodeNum = nodeNum->getNext();
    }
    return NULL;
}