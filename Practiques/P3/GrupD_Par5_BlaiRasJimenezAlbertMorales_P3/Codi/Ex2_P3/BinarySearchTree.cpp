
/* 
 * File:   BinarySearchTree.cpp
 * Author: Blai Ras i Albert Morales
 *
 * Created on 21 / Abril / 2016, 09:26
 */

#include "BinarySearchTree.h"
#include "Position.h"
#include <iostream>
#include <vector>


//Constructor. Inicialitza l'arrel del arbre a res (NULL)
BinarySearchTree::BinarySearchTree() { 
    arrel = NULL;
}

//Metode que utilitzo per saber si l'arbre esta buit
bool BinarySearchTree::empty() {
    return arrel == NULL; //Condicio
}

//Metode que calcula recursivament la mida
int BinarySearchTree::size(Position *node) { 
    if(node == NULL){ //Si el node que em pasen es null, la mida es zero
        return 0;
    } else {
        return size(node->left()) + size(node->right()) + 1; //Calcula tota la dreta, suma 1 de l'arrel i calcula tota l'esquerre del arbre
    }
}

//Metode que retorna si cert/fals segons si troba l'element passat en l'arbre
bool BinarySearchTree::search(string aBuscar, Position *arrelFalsa) {
    if (arrelFalsa != NULL) { //Si l'arbre no esta buit...
        if (aBuscar== arrelFalsa->getElement()) { //Miro primer si l'element esta en l'arrel
            return true;
        }
        
        //Miro si l'element es mes petit o més gran que l'arrel, per saber si buscar a dreta o esquerre
        if (aBuscar<arrelFalsa->getElement()){ 
            return search(aBuscar,arrelFalsa->left());
        } else {
            return search(aBuscar, arrelFalsa->right()); 
        }
        
    } else { //Si no el trobo retorno fals
        return false;
    }
}

Position* BinarySearchTree::searchNode(string aBuscar, Position *arrelFalsa) {
    if (aBuscar == arrelFalsa->getElement()) { //Miro primer si l'element esta en l'arrel
        return arrelFalsa;
    }
    //Miro si l'element es mes petit o més gran que l'arrel, per saber si buscar a dreta o esquerre
    if (aBuscar<arrelFalsa->getElement()){ 
        return searchNode(aBuscar,arrelFalsa->left());
    } else {
        return searchNode(aBuscar, arrelFalsa->right()); 
    }
}

//Metode que insereix un element passat per parametre a l'arbre
void BinarySearchTree::insert(string clau, Position *node, int linia, int posicio) {
    Dades dades(linia, posicio);
    Position *nouNode = new Position(clau, dades); //Node temporal
    
    //Estableixo el node com a dret, pare i esquerre
    nouNode->setLeft(NULL); 
    nouNode->setRight(NULL);
    nouNode->setParent(node);
    
    //Comprovo si la mida es zero, i estableixo una arrel i un pare a nullptr
    if (size(node) == 0){
        arrel = nouNode; 
        arrel->setParent(NULL);
        
    }else { //Si no,...
        if (clau != node->getElement()){
            if (node->isExternal()){ //Si es tracte d'un node fulla,
                if (clau < node->getElement()){ //Si l'element inserit d'aquest es mes petit que la clau
                    node->setLeft(nouNode); //L'estableixo
                } else { //Si no, anira a la dreta, seguint la teoria dun BST
                    node->setRight(nouNode);
                }

            }else { //Si no es un node fulla, 
                if (clau < node->getElement()) { //Si la clau es mes petita...             
                    if (node->left() == NULL ) { //Estableixo un node nou a la esquerre amb l'element passat
                        node->setLeft(nouNode);

                    }else { //Si no, va a la dreta
                        insert(clau, node->left(), linia, posicio);
                    }
                } else { //Si no es un node fulla...
                    if (node->right() == NULL ) { //Estableix un nou node a la dreta, canviant el que hi havia
                        node->setRight(nouNode);

                    }else { //Si no, estableix un pero no canviis el que hi havia
                        insert(clau, node->right(), linia, posicio);
                    }
                }

            }
        } else {
            searchNode(clau, arrel)->setDades(dades);
        }
    }
    
}

//Metode que em retorna l'arrel del arbre. Serveix per inicialitzar l'arrel
Position* BinarySearchTree::root(){ 
    return arrel;
}

//Metode que em retorna l'altura o alcada de l'arbre
int BinarySearchTree::height(Position *node){
    if (node->isExternal()){ //Si el node es extern (no ho sera en la primera crida, ja que passare l'arbre)
        return 1; //Acumula 1
    } else {
        if (node->right() == NULL){ //Si no, estableix la dreta com que ja l'has fet i..
            return 1 + height(node->left()); //Torna a cridar la funcio pel seguent node dret acumulant 1.
        } 
        if (node->left() == NULL){ //Fes el mateix per l'esquerre
            return 1 + height(node->right());
        }
        if (node->left() != NULL && node->right() != NULL){ //Em el cas de coincidir dreta i esquerre, farem el mateix pero cridant a dreta i esquerre
            return 1 + max(height(node->left()), height(node->right()));
        }
    }
}

//Metode que imprimeix l'arbre seguint el recorregut Inorder
void BinarySearchTree::printInorder(Position* node) {
    if(node != NULL) { //Si el arbre no esta buit...
        if(node->left()){ //Si em trobo un node esquerre
            printInorder(node->left()); //El visito i vaig a pel seguent
        }
        cout << " " << node->getElement() << " "; //Imprimeix (res en la primera crida)
        cout << "[";
        node->showDades(node);
        cout<< "]"<< endl;
        if(node->right()) { //Faig el mateix per la dreta
            printInorder(node->right());
        }
    } else { //Si esta buit, imprimeix una senyal
        cout << "[]";
    }
}

//Metode que imprimeix l'arbre seguint el recorregut Preorder
void BinarySearchTree::printPreorder(Position* node) {
     if(node != NULL) { //Si l'arbre no esta buit...
        cout << " " << node->getElement() << " "; //Imprimeix (res en la primera crida)
        if(node->left()){//Si em trobo un node esquerre
            printPreorder(node->left()); //El visito i vaig a pel seguent (s'imprimirà)
        }
        if(node->right()){ //Faig el mateix per la dreta
            printPreorder(node->right());
        }
    }else { //Si esta buit, imprimeix una senyal
        cout << "[]";
    }
}

//Metode que imprimeix l'arbre seguint el recorregut Postorder
void BinarySearchTree::printPostorder(Position* node) {
    if(node != NULL) {//Si l'arbre no esta buit...
        if(node->left()){ //Si em trobo un node esquerre
            printPostorder(node->left());//El visito i vaig a pel seguent
        }
        if(node->right()) { //Ara ho faig amb la dreta
            printPostorder(node->right());
        }
        //Llavors ja puc imprimir, ja ho he visitat tot
        cout << " " << node->getElement() << " ";
    }else {
        cout << "[]";
    }
}
