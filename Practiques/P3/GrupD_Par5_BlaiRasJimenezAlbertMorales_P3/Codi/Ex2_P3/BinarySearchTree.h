
/* 
 * File:   BinarySearchTree.h
 * Author: Blai Ras i Albert Morales
 *
 * Created on 21 / Abril / 2016, 09:26
 */

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <string>
#include "Position.h"
#include "Dades.h"
class BinarySearchTree {
    public:
        BinarySearchTree(); //Constructor
        int size(Position *node); //retorna el nombre de nodes que hi ha al arbre
        bool empty(); //Cert-Fals si l'arbre esta buit
        Position* root(); //Retorna ladreca del root
        void insert(string clau, Position *node, int linia, int posicio); //Afegeix un nou node a larbre
        bool search(string aBuscar, Position *arrelFalsa);
        int height(Position* node); //Retorna un enter corresponent a l'lalcada del arbre
        void printPreorder(Position* node); //Imprimeix seguint el recorregut Preorder
        void printPostorder(Position* node); //Imprimeix seguint el recorregut Postorder
        void printInorder(Position* node); //Imprimeix seguint el recorregut Inorder
        Position* searchNode(string aBuscar, Position *arrelFalsa);
    private:
        Position* arrel; //Punter al arrel de l'arbre
        
        
        
    
};

#endif /* BINARYSEARCHTREE_H */

