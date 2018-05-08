/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedStack.h
 * Author: blair
 *
 * Created on June 8, 2016, 4:38 PM
 */

#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include <vector>
#include "Node.h"

class LinkedStack {
public:
    LinkedStack();
    void push(int x);
    int pop();
    void show();
    int size();
    bool empty();
    int top();
    bool full();
private:
    int mida;
    std::vector<int> array = std::vector<int>(100);
    Node* ultim;
};

#endif /* LINKEDSTACK_H */

