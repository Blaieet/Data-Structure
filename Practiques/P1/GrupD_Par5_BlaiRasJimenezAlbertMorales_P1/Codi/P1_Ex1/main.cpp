
/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on March 12, 2016, 11:36 AM
 */


#include <iostream>
#include <string>
#include "ArrayStack.h"
#include "FullStackException.h"
#include "EmptyStackException.h"                                 

using namespace std;


int main(int argc, char** argv) {
    ArrayStack *stack = new ArrayStack(); // Declaracions / Inicialitzacions
    /*
    string chars;
    bool err = false;
    int i = 0;

    cout << "Indtrodueix una expressio numerica" << endl; // Demanar expressió
    cin >> chars;
    
    while (!err && chars.length() > i){ // mentres no hi ha errors i la llargada de la expressió numèrica es més gran que el número del comptador  
        if(chars[i] == '(' || chars[i] == '[' || chars[i] == '{'){// si el caràcter actual és '(' o '[' o '{' fer...
            try{
                stack->push(chars[i]);// introdueix el caràcter actual al stack
            }catch(FullStackException* exception){
                cout << exception->error;
                err = true;
            }
            
        }else if(chars[i] == ')' || chars[i] == ']' || chars[i] == '}'){// si es ')' o ']' o '}'
            
            try{
                if (chars[i] == ')' && stack->top() == '(' || chars[i] == ']' && stack->top() == '[' || chars[i] == '}' && stack->top() == '{'){// si el caràcter actual és ')' i el top del stack és '(' (igual amb '[]' i '{}')fer...
                    stack->pop();// elimina l'ultim element de la pila
                }
            }catch(EmptyStackException* exception){
                cout << exception->error;
                err = true;
            }
        }
        i++;//suma un
        
    }
    if(err || !stack->empty()){// si la pila no està buida o hi ha error fer...
        cout << "L’expressio esta mal aparellada" << endl;
        
    }else{// sinó fer...
        cout << "L’expressio esta ben aparellada" << endl;
    }
    */
    stack->push('A');
    cout << stack->top();
    stack->push('B');
    stack->push('C');

    stack->print();
    return 0;
}

