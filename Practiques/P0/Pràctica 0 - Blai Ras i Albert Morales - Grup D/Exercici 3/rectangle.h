
/* 
 * File:   rectangle.h
 * Author: Albert Morales i Blai Ras
 *
 * Created on February 26, 2016, 11:45 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle { 
public:
    rectangle(float a, float b); //El rectangle te els mateixos atributs, base i altura
    float getAreaRectangle(); //mètode que em retornarà l'area
private:
    float amplada;
    float alcada;

};

#endif /* RECTANGLE_H */

