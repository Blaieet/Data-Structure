/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dades.h
 * Author: Albert
 *
 * Created on 3 de mayo de 2016, 18:20
 */

#ifndef DADES_H
#define DADES_H

class Dades {
public:
    Dades(int line, int posicio);
    int getLine();
    int getPosicio();
    int* getDades();
private:
    int dades[2];
};

#endif /* DADES_H */

