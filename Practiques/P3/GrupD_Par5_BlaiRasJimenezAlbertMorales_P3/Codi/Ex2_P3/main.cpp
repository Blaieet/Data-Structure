/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Albert
 *
 * Created on 3 de mayo de 2016, 17:41
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <list>
#include "BTSWordFinder.h"
#include <sstream>
#include <stdexcept>

using std::runtime_error;

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    
    
    double temps;
    
    string nomFitxer;
    string linia, word;
    int altura;
    
    cout << "Introdueix el nom del fitxer '.txt.' \n" << endl;
    cin >> nomFitxer;
    BTSWordFinder bts;
    bts.appendText(nomFitxer);
    ifstream myfile (nomFitxer);
    ifstream diccionari("dictionary.txt");
    list<Dades> list;
    
    clock_t start = std::clock();
    if (diccionari.fail() or myfile.fail()) {
        throw runtime_error("Error al obrir el document!");
    }else {
        string aux1, aux2;
        
        while(getline(diccionari,aux1)) {

            istringstream streamWord(aux1);
            while(!streamWord.eof()) {

                streamWord>>aux2;
                if (aux2!="") {
                    list = bts.findOccurences(aux2);
                    
                    if (list.size()==0) {
                        
                        
                    } else {
                        cout << 8<< endl;
                        cout<<aux2<<": "<<endl;
                        for (int i = 0; i< list.size(); i++) {
                            cout << "Linia: " << list.back().getLine() << endl;
                            cout << "Posicio: " << list.back().getPosicio() << endl;
                            list.pop_back();
                            
                        }
                        
                        cout <<endl;
                    }
                }
            }
        }
    }
    clock_t end = std::clock();
    temps = (start-end)*1000 / (double) CLOCKS_PER_SEC;
    altura = bts.getTree().height(bts.getTree().root());
    cout << "Ho he calculat en " << temps << " milisegons\n i l'arbre te una altura de " << altura;
    return 0;
}

    
    
    
    
    
         



