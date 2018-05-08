
/* 
 * File:   main.cpp
 * Author: Albert Morales i Blai Ras
 *
 * Created on February 26, 2016, 11:43 PM
 */
#include <iostream>
#include <cstdlib>
#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main(int argc, char** argv) {
    float alcada, amplada; //Atributs del triangle i del rectangle
    string opcio, mesFigures; //Opcio indica si vull calcular un rectangle o un triangle
    bool done; //Boleà que indica si vull afegir més figures o no
    done = false;
    
    while (done == false){ 
        cout << "Vols calcular l'area d'un triangle o d'un rectangle? (T/R)"<<endl;
        cin >> opcio;
        
        if (opcio == "T"){ //Si vull afegir un triangle, crido a la clase triangle
            cout << "Alçada: "<< endl;
            cin >> alcada;
            cout << "Amplada: "<< endl;
            cin >> amplada;
            try{
                triangle t = triangle(amplada, alcada);
                cout << "L'area es " << t.getAreaTriangle()<<endl;
            } catch (char const* error ){
                cout << error;
            }
        }
        else if (opcio == "R"){ //Si vull afegir un rectangle, crido a la clase rectangle
            cout << "Alçada: "<< endl;
            cin >> alcada;
            cout << "Amplada: "<< endl;
            cin >> amplada;
            try{
                rectangle r = rectangle(amplada, alcada);
                cout << "L'area es " << r.getAreaRectangle()<<endl;
            } catch (char const* error ){
                cout << error;
            }
        }
        else{ //Si posa una lletra diferent de R o T
            cout <<"Opció no vàlida \n";
        }
        
        cout << "Vols calcular un altre figura? (S/N): "<< endl;
        cin >> mesFigures;
        
        if(mesFigures == "N"){
            done = true;
        }
    }
    return 0;
}

