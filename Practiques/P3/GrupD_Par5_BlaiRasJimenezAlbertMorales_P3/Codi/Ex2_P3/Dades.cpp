/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dades.cpp
 * Author: Albert
 * 
 * Created on 3 de mayo de 2016, 18:20
 */

#include "Dades.h"

Dades::Dades(int line, int posicio) {
    dades[0] = line;
    dades[1] = posicio;
}

int* Dades::getDades(){
    return dades;
}

int Dades::getLine(){
    return dades[0];
}

int Dades::getPosicio(){
    return dades[1];
}