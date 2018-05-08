
/* 
 * File:   ArrayStack.h
 * Author: Blai Ras Jimenez
 *
 * Created on March 12, 2016, 12:08 PM
 */

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include <iostream>
#include <vector>
using namespace std;

class ArrayStack {
    private:
        int MAX_STACK=100;
        std::vector<char> data = std::vector<char>(MAX_STACK);
        int t; // top de la pila
    public:
        ArrayStack(); //inicialitza una pila, buida
        bool empty(); //indica si la pila és buida
        bool full(); //indica si la pila és plena
        void push(const char item); //Introdueix element (error si no ha estat posible)
        void pop(); //treu un element de la pila, retorna una excepció si no ha estat possible
        char top(); //retorna l’element del top de la pila, retorna una excepció si no ha estat possible
        void print(); // imprimeix tot el contingut de la pila
};


#endif /* ARRAYSTACK_H */

