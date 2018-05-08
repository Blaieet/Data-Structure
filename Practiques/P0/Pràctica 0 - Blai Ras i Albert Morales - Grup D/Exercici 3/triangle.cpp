/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "triangle.h"

triangle::triangle(float a, float b){
    if (a <= 0 || b <= 0){
        throw "Valors no vàlids.\n";
    }
    this->amplada = a;
    this->alcada = b;
}

float triangle::getAreaTriangle(){
    return this->amplada * this->alcada * 0.5;
}
