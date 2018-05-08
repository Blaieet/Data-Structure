/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeList.h
 * Author: Albert
 *
 * Created on 20 de abril de 2016, 19:58
 */

#ifndef NODELIST_H
#define NODELIST_H

#include <vector>

class NodeList {
public:
    NodeList();
    virtual ~NodeList();
    bool empty();//retorna boolea indicant si la llista esta buida
    int size();//retorna el n d'elements que hi ha a la llista
    int get();// retorna l'element del node on esta situal el pi
    void insert(int e);//afegeix un nou node davant del pi (amb les dades que rep com a parametres)
    void remove();//elimina el node on esta el pi, pi->next
    void modify(int e);//modifica el valor del node on està situat el pi
    void begin();//pi->firstnode
    bool end();//retorna boolea
    void next();//p1->posicio node ++ 
    void show();//cout
    DoubleNode* find(int find);
private:
    std::vector<int> data = std::vector<int>(100);
    DoubleNode *first;
    DoubleNode *last;
    DoubleNode *pi;
    int listSize;
};

#endif /* NODELIST_H */

