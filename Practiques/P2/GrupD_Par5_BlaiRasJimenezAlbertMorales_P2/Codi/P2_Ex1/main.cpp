/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on 31 / març / 2016, 09:18
 */

#include <iomanip>
#include <random>
#include <cstdlib>
#include "LinkedQueue.h"
#include "Node.h"

using namespace std;


int main(int argc, char** argv) {
    
    LinkedQueue cua; //Creo una nova cua

    
//    cout<< "La cua és buida? "<<cua.empty()<<endl; //Pregunto si la cua es buida (0:no, 1:si)
//    
//    //int k; (Implementacio anterior)
//    //int quiarriba[]={1,1,3,2,2,1,1,3,3,3}; (Implementacio anterior)
//    
//    int item; //Element que afegeixo per minut
//    int clients_atesos; //Numero de clients atesos per minut
//    int temps_espera; //Numero de temps d'espera per minut
//    int max_temps; //Maxim de temps despera
//    float mitjana = 0.0; //Mitjana de temps d'espera
//    
//    //Random
//    uniform_int_distribution<> u(1,3); //u és un enter que pot prendre els valors 1, 2 i 3
//    default_random_engine e; //e és un generador de nombres random
//    unsigned k; //k és l’enter que necessitem
//    
//    for (int minut=0; minut<100; ++minut){ // substituir per 100 minuts
//        
//        //k = quiarriba[minut]; (Implementacio anterior)
//        
//        k=u(e); //k serà un nombre aleatori entre 1 i 3
//        
//        
//        cout<< "Ara la k es " << k <<endl; //Informacio que m'ajuda a veure si el codi esta be
//        
//        if (!cua.empty()) {
//            item = cua.first(); // retorna el front de la cua
//            cout << "El primer element de la cua és: "<<item << endl;
//            cua.dequeue();
//            cout << "El desencuem"<<endl;
//            
//            clients_atesos++; //Incrementa el numero de clients atesos
//            temps_espera = minut - item + temps_espera; //Assigna el temps d'espera adecuat
//            max_temps = minut - item; //Modifica el temps d'espera maxim
//        } //si la cua no és buida, treure un client
//        
//        if (k==1) { //Si k és 1 afegir un client a la cua
//            cout<<"Encuem "<<minut<<endl;
//            cua.enqueue(minut);
//        }
//        
//        else if (k==2){ //Si k és 2 afegir dos clients a la cua
//            cout<<"Encuem "<<minut<<endl;
//            cout<<"Encuem "<<minut<<endl;
//            cua.enqueue(minut);
//            cua.enqueue(minut);
//        }
//        else if (k==3) { // Si k és 3 no afegir ningú a la cua
//        }
//        
//        if (clients_atesos != 0){ //Si hem ates clients...
//            mitjana = (float)temps_espera/clients_atesos; //Calcula la mitjana
//        }else {
//            mitjana = 0;
//        }
//        
//        //Informacio dels clients
//        cout << "\n-----------------\n";
//        cout << "He atès " << clients_atesos << " clients" << endl;
//        cout << "El temps d'espera es de " << temps_espera << endl;
//        cout << "El temps màxim d'espera es " << max_temps << endl;
//        cout << "La mitjana de temps d'espera es " << mitjana << endl;
//        cout << "\n-----------------\n";
//    }
    
    cua.enqueue(3);
    cua.enqueue(4);
    cua.enqueue(6);
    cua.show(); // Imprimeix la cua per pantalla
    cua.deleteLast(cua.fiirst());
    cua.show();
    cua.enqueue(23454);
    cua.dequeue();
    cua.show();

    return 0;
}

