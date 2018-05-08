
#include <iostream>
#include "ArrayStack.h"
#include "EmptyStackException.h"
#include "FullStackException.h"
#include "EmptyStackException.h"
using namespace std;

ArrayStack::ArrayStack(){//Constructor, buit
    t=0;
}
bool ArrayStack::empty(){
    return t == 0;//Cert si la pila es buida
}

bool ArrayStack::full(){//Cert si la pila ha assolit l'enter de mida maxima
    return t == MAX_STACK;
}

void ArrayStack::push(const char item){
    if(!full()){//Si no està plena...:
        data[t] = item;//Afegeix l'element a la pila
        t++;//Incrementa la mida de la pila
    }else{
        throw new FullStackException(); //Si no, llenca excepcio de tipus "pila plena"
    }
}

void ArrayStack::pop(){
    if (!empty()){ //Si la pila no esta buida...:
        t--;//Decrementa la mida de la pila, perque he tret un element
    } else {
        throw new EmptyStackException();//Si no, llenca exepcio de tipis runtime_error
    }
}

char ArrayStack::top(){
    if (!empty()){//Si la pila no esta buida...:
        return data[t-1];//Retorna el primer element de la pila
    } else{
        throw new EmptyStackException();//Si no, llenca excepcio de tipus "pila buida"
    }
}

void ArrayStack::print(){
    if (!empty()) {//Si la pila no esta buida...:
        for (int e = 0; e < t; e++) {//Recorra la pila
            cout << data[e] << " ";//Imprimeix cada element
        }
    } else {
        throw EmptyStackException();//Si no, llenca exepcio de tipus "pila buida"
    }
}
