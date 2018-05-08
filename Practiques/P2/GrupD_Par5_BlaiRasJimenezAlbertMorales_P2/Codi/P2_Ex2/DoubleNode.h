/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoubleNode.h
 * Author: Albert
 *
 * Created on 20 de abril de 2016, 19:58
 */

#ifndef DOUBLENODE_H
#define DOUBLENODE_H

class DoubleNode {
public:
    DoubleNode(int element);
    virtual ~DoubleNode();
    DoubleNode* getNext();//retorna adreça del seguent node
    DoubleNode* getPrev();//retorna adreça de node anterior
    void setNext(DoubleNode* next);//modifica l'adreça del next per l'adreça rebuda com a par
    void setPrev(DoubleNode* prev);//modifica l'adreça del prev per l'adreça rebuda com a par
    int getElement();//retorna l'element que hi ha guardat al node
    void setElement(int element);//setter element
    DoubleNode* next;
    DoubleNode* prev;
    
private:
    int element;
};

#endif /* DOUBLENODE_H */

