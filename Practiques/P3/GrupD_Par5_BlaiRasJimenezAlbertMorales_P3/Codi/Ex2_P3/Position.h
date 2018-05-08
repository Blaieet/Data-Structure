
/* 
 * File:   Position.h
 * Author: Blai Ras i Albert Morales
 *
 * Created on 21 / Abril / 2016, 09:26
 */

#ifndef POSITION_H
#define POSITION_H

#include <iostream>
#include <string>
#include <list>
#include "Dades.h"

using namespace std;

class Position {
    public:
        Position(string clau, Dades dades);
        Position* right(); //Retorna l'adreca del fill dret del node 
        Position* left(); //Retorna l'adreca del fill esquerre del node
        Position* parent(); //Retorna ladreca del pare del node
        bool isExternal(); //Retorna Cert-Fals si el node es o no un node extern
        string getElement(); //Retorna la clau emmagatzemada al node
        void setRight(Position* fill); //Modifica ladreca del fill dret del node
        void setLeft(Position* fill); //Modifica ladreca del fill esquerra del node
        void setParent(Position* pare); //Modifica ladreca del pare del node
        bool isRoot(); //Cert-Fals si el node es el l'arrel del arbre
        void setDades(Dades dades);
        list<Dades> getDades();
        void showDades(Position* node);
    private:
        Position* fillDret; //Punter al node del fill dret
        Position* fillEsquerre; //Punter al node del fill esquerre
        Position* pare; //Punter al node pare
        string clau; //Paraula que s'insereix
        list<Dades> dades;
    
};


#endif /* POSITION_H */

