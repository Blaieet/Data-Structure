/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Albert
 *
 * Created on 20 de abril de 2016, 19:58
 */

#include <cstdlib>
#include "DoubleNode.h"
#include "NodeList.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    NodeList list;
    
    //Implementacions d'exemple
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    list.remove();
    
    //list.begin()
    //list.modify(3);
    //list.size()

    list.show();
    
    DoubleNode* trobat = list.find(2);
    
    cout << trobat->getElement();
    
    return 0;
}

