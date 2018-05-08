/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BTSWordFinder.cpp
 * Author: Albert
 * 
 * Created on 3 de mayo de 2016, 17:42
 */

#include "BTSWordFinder.h"
#include <fstream>

BTSWordFinder::BTSWordFinder() {

}

void BTSWordFinder::appendText(string filename){
    ifstream meu_fitxer(filename);
    string paraula = "";
    char caracter;
    int linia = 0;
    int posicio = 0;
    while (!meu_fitxer.eof()) {
        caracter = meu_fitxer.get();
        if(caracter == ',' or caracter == '.' or caracter == ':' or caracter == '(' or caracter == ')'){
                
        }else if(caracter == '\n'){
            linia++;
            posicio++;
            insertWord(paraula,linia,posicio);
            posicio = 0;
            paraula = "";
        }else if(caracter == ' '){
            posicio++;
            insertWord(paraula,linia,posicio);
            paraula = "";
        }else{
            if(caracter > 64 and caracter < 91){
                caracter = caracter + 32;
            }
            paraula = paraula + caracter;
        }
    }
    meu_fitxer.close();
}

void BTSWordFinder::insertWord(string word, int line, int position){
    tree.insert(word, tree.root(), line, position);
}

list<Dades> BTSWordFinder::findOccurences(string word){
    list<Dades> llistaBuida;
    cout << word << endl;
    if (tree.search(word, tree.root())){
        
        return tree.searchNode(word, tree.root())->getDades();
    } else {
        return llistaBuida;
    }
}

void BTSWordFinder::viewIndex(){
    tree.printInorder(tree.root());
}

BinarySearchTree BTSWordFinder::getTree() {
    return tree;
}