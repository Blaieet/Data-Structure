
/* 
 * File:   triangle.h
 * Author: Blai Ras i Albert Morales
 *
 * Created on February 23, 2016, 12:45 PM
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

class triangle { //Constructor de la clase triangle
public:
    triangle(float a, float b); //Paràmetres corresponents a la altura i la base
    float getArea(); //Mètode que hem retorna l'area del triangle
private: //Atributs del triangle
    float amplada; 
    float alcada;

};

#endif /* TRIANGLE_H */

