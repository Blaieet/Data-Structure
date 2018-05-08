
/* 
 * File:   ArrayQueue.h
 * Author: Blai Ras i Albert Morales
 *
 * Created on March 23, 2016, 8:30 PM
 */

//Imports necessaris
#include <cstdlib>
#include <iostream>
#include "ArrayQueue.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ArrayQueue MevaCua; //Defineixo una nova cua
    /*
    //Codi extret del que em demanen al enunciat:
    
    cout << "Mida actual de la cua: " << MevaCua.size() << "\n";
    cout << "Encuem 3 elements a la cua... \n";
    
    MevaCua.enqueue(1); MevaCua.enqueue(2); MevaCua.enqueue(3);
    MevaCua.print();
    
    cout << "Cua plena (0:no, 1:si): "<< MevaCua.full() << "\n";
    cout << "Treiem 1er element de la cua: " << MevaCua.dequeue() << "\n";
    
    MevaCua.print();
    
    cout << "Treiem 2on element de la cua: " << MevaCua.dequeue() << "\n";
    cout<< "Encuem 2 elements a la cua... "<< "\n";
    
    MevaCua.enqueue(4); MevaCua.enqueue(5);
    
    cout<< "Treiem 3er element de la cua: " << MevaCua.dequeue() << "\n";
    cout<< "Mida actual de la cua: " << MevaCua.size() << "\n";
    cout << "Cua buida (0:no, 1:si): " << MevaCua.empty() << "\n";
    */
    
    MevaCua.enqueue(2);
    MevaCua.enqueue(3);
    MevaCua.print();
    MevaCua.enqueue(342);
    MevaCua.print();
    
    cout << "dfsdfsdf" << 54 % 54 << endl;
    return 0;


}

