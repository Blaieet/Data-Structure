/* 
 * File:   triangle.h
 * Author: Blai Ras i Albert Morales
 *
 * Created on February 26, 2016, 12:23 PM
 */

#include "rectangle.h"

rectangle::rectangle(float a, float b){ //Constructor del rectangle amb paràmetres base i altura
    if (a <= 0 || b <= 0){ //Comproba que son valors vàlids
        throw "Valors no vàlids.\n";
    }
    this->amplada = a; //Relaciono atributs
    this->alcada = b;
}
float rectangle::getAreaRectangle(){ //Metode que calcula l'area
    return this->amplada * this->alcada ;
}
