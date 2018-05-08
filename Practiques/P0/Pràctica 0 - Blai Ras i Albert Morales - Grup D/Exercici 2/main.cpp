
/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on February 23, 2016, 12:50 PM
 */

//Llibreries necesàries
#include <iostream>
#include "triangle.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Atributs del triange
    float amplada, alcada;
    //Boleà que m'indicarà quan vull parar de calcular areas
    bool done;
    done = false;
    //String corresponent a la resposta del usuari (S o N)
    string mesTriangles;

    //Mentre vagi afegint figures...
    while (done == false){
        //Demano al usuari les dades del triangle
        cout << "Alçada: "<< endl;
        cin >> alcada;
        cout << "Amplada: "<< endl;
        cin >> amplada;

        try{ //Si estàn ben introduides...:
            triangle t = triangle(amplada, alcada); //Li paso la informació a la clase triangle
            cout << "L'area es " << t.getArea()<<endl; //Demano l'area al metode
        } catch (char const* error ){ //Si els valors no han estat ben introduits...:
            cout << error; //Imprimeix un error
        }

        cout << "Vols calcular un altre triangle? (S/N): "<< endl;
        cin >> mesTriangles;
        
        if(mesTriangles == "N"){ //Quan escrigui "no" acaba el while.
            done = true;
        }
    
    }
    return 0;

}

