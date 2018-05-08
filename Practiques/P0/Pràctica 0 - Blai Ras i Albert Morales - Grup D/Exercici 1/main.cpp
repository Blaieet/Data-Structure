/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on February 21, 2016, 5:20 PM
 */

//Llibreries necesàries pel bon funcionament del programa
#include <cstdlib> 
#include <iostream>
using namespace std; //Per no posar cada vegada "std:" davant 

int main(int argc, char** argv) {
    string nom, comentari; //Creo una variable de tipus string que es refereix al nom de la persona i al comentari que s'imprimirà segons la nota
    float nota; //decimal indican la nota introduida
        
    cout << "Hola, com et dius?"<< endl; //Missatge de benvinguda
    cin >> nom; //El text que introdueixi serà el nom
    cout << "Hola, " << nom << " quina nota esperes treure a Estructura de dades?" << endl; //Pregunto la nota
    cin >> nota; //El text que introdueixi serà la nota
    
    if (nota>=0 && nota<5){ //Si la nota està entre 0 i 5...:
        comentari = " no serà suficient per aprovar... has de ser més positiu.";
    }
    else if (nota>=5 && nota<6){ //Si la nota està entre 5 i 6 (Bé)
        comentari = " és molt just... intenta treure més nota.";
    }
    else if (nota>=6 && nota<8){ //Si la nota està entre 6 i 8 (Notable)
        comentari = " no està gens malament... a veure si pots aconseguir més nota!";
    }
    else if (nota>=8 && nota<=10){ //Si la nota està entre 8 i 10 (Excel·lent)
        comentari = " és molt bona nota... molta sort!!";
    }
    else { //Qualsevol valor fora del rang 0 i 10
        comentari = " no és possible, et recordo que la nota ha de ser entre 0 i 10";
    }
    
    cout << "Vaja, un " << nota << comentari; //Imprimeix la nota amb el comentari adient per cada cas

        
    return 0;
}