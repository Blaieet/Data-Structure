/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BTSWordFinder.h
 * Author: Albert
 *
 * Created on 3 de mayo de 2016, 17:42
 */

#ifndef BTSWORDFINDER_H
#define BTSWORDFINDER_H

#include <string>
#include "BinarySearchTree.h"
using namespace std;

class BTSWordFinder {
    public:
        BTSWordFinder();
        void appendText(string filename); // Emmagatzema el contingut d'un fitxer (filename) dins d'un arbre
        void insertWord(string word, int line, int position); // insereix una paraula
        list<Dades> findOccurences(string word); // retorna una llista que conté les línies i les posicions d'una paraula (word) al text
        void viewIndex(); // mostra per pantalla les paraules del arbre en ordre alfabètic juntament amb les posicions on apareixen
        BinarySearchTree getTree();
private:
        BinarySearchTree tree; 
};

#endif /* BTSWORDFINDER_H */

