
/* 
 * File:   ArrayQueue.h
 * Author: Blai Ras i Albert Morales
 *
 * Created on March 23, 2016, 8:30 PM
 */

//Imports necesaris
#include <vector>
#include <iostream>
#include <stdexcept>
#include "ArrayQueue.h"
#include <fstream>

using std::runtime_error; //Per agafar excepcions

using namespace std;

ArrayQueue::ArrayQueue() { //Constructor. Inicialitzo els atributs
    primer = -1;
    ultim = -1;
    n=0;
}

int ArrayQueue::size() {
    return n; //Retorna la capacitat
}

bool ArrayQueue::empty() {
    return (n==0); //Cert en cas que n sigui 0
}

bool ArrayQueue::full() {
    return (n==100); //Cert en cas que n sigui 100
}

void ArrayQueue::enqueue(int x) { //Em pasen el numero per parametre
    if (!full()) { //Si la pila no esta plena...
        ultim++; //Incrementa l'index
        data[ultim%MAX_QUEUE] = x; //Afageixlo
        n++; //Incrementa la mida
    }else {
        throw runtime_error("La cua esta plena!"); //Excepcio
    }
    
}


int ArrayQueue::dequeue() {
    if (!empty()) { //Si la pila no esta buida...
        primer++; //Incremento l'index de primer element
        int ret = data[primer % MAX_QUEUE]; //Indico l'enter a retornar
        n--; //Decremento la mida de la cua
        return ret; //Retorno l'enter
    } else {
        throw runtime_error("La cua esta buida!"); //Excepcio
    }
}


int ArrayQueue::front() {
    if (empty()) //Si la cua esta buida...:
        throw runtime_error("La cua està buida"); //Excepcio
    int first; //Enter corresponent al primer element de la cua
    first = data[primer+1]; //Suma 1 al index que m'indica el primer element i aquest sera el primer element real
    return first; //Retornal
}



void ArrayQueue::print() {
    if (empty()) { //Si la cua esta buida...:
        throw "La pila esta buida! \n"; //Excepcio
    } else {
        for (int i = 0; i < n; i++) { //Bucle, per tot element de la cua...:
            int index = (primer+i)%n; //Index que em marcara a on començar a imprimir
            cout << data[index+1] << " "; //Imprimeix per pantalla cada element de la cua
        }
        cout << "\n";
    }
}

void ArrayQueue::pillaText(string x) {
    string word, linia;
    int line = 0;
    int numParaula = 0;
    string fitxer = "text.txt";
    ifstream myfile(fitxer);
    if (myfile.is_open()) {
        while (!getline(myfile,linia)) {
            myfile >> word;
            //insert(word, linia+1, numParaula+1)
            numParaula++;
        }
        linia = linia + "\n";
        line++;
    }
}

