
/* 
 * File:   Position.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on 21 / Abril / 2016, 09:26
 */

#include "Position.h"
#include <string>
#include "Dades.h"

//Constructor. Seteja la clau al crear un node
Position::Position(string clau, Dades dades) { 
    this->clau = clau;
    this->dades.push_front(dades);
}

//Metode que em retorna el fill esquerre
Position* Position::left() { 
    return fillEsquerre;
}

//Metode que em retorna el fill dret
Position* Position::right() {
    return fillDret;
}

//Metode que em retorna el node pare
Position* Position::parent() {
    return pare;
}

//Metode que m'indica si un node es extern o no (cert o fals)
bool Position::isExternal() {
    return (fillDret == NULL && fillEsquerre == NULL);
    
}

//Metode que retorna la clau (string) afegida 
string Position::getElement() {
    return clau;
}

//Metode que seteja un node passat per parametre com a fill dret
void Position::setRight(Position* fill) {
    this->fillDret = fill;
    
}

//Metode que seteja un node passat per parametre com a fill esquerre
void Position::setLeft(Position* fill) {
    this->fillEsquerre = fill;
}

//Metode que seteja un node passat per parametre com a pare
void Position::setParent(Position* pare) {
    this->pare = pare;
}

//Metode que m'indica si un node es arrel (cert o fals)
bool Position::isRoot() {
    return pare == NULL;
}

void Position::setDades(Dades dades){
    this->dades.push_back(dades);
}

list<Dades> Position::getDades(){
    return dades;
}

void Position::showDades(Position* node){
    list<Dades> llista = node->getDades();
    int i = llista.size();
    for (int x = 0; x < i; x++ ){
        cout << "(" << llista.back().getLine() << "," << llista.back().getPosicio() << ")";
        llista.pop_back();
    }
}