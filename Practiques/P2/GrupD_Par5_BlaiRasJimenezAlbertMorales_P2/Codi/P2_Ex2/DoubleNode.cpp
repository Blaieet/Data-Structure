/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoubleNode.cpp
 * Author: Albert
 * 
 * Created on 20 de abril de 2016, 19:58
 */

#include "DoubleNode.h"

DoubleNode::DoubleNode(int element) {
    this->element = element;
}


DoubleNode* DoubleNode::getNext() {
    return next;
}

DoubleNode*DoubleNode::getPrev() {
    return prev;
}

void DoubleNode::setNext(DoubleNode* next) {
    this->next = next;
}

void DoubleNode::setPrev(DoubleNode* prev) {
    this->prev = prev;
}

int DoubleNode::getElement() {
    return element;
}

void DoubleNode::setElement(int element) {
    this->element = element;
}