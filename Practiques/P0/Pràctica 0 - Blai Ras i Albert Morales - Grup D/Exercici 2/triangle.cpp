
/* 
 * File:   triangle.cpp
 * Author: Blai Ras i Albert Morales
 * 
 * Created on February 23, 2016, 12:47 PM
 */

#include "triangle.h"

triangle::triangle(float a, float b){ //Atributs de la clase triangle
    if (a <= 0 || b <= 0){ //Comproba que els valors són vàlids
        throw "Valors no vàlids.\n"; //Missatge d'error
    }
    //Indico que a i b es refereixen a amplada i alcada
    this->amplada = a; 
    this->alcada = b;
}

float triangle::getArea(){ //Mètode que calcula l'area
    return this->amplada * this->alcada * 0.5;
}