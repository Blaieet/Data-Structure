/* 
 * File:   main.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on 31 / març / 2016, 09:18
 */

#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node(int element); //Constructor
        Node* getNext(); //Retorna el punter al seguent element
        void setNext(Node* i); //Assigna un nou punter
        int getElement(); //Obte l'element
        int info; //Enter amb l'element en cuestio
        Node *next; //Node al element seguent
    private:
        
        
        
};

#endif /* NODE_H */

