/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blair
 *
 * Created on June 8, 2016, 4:38 PM
 */

#include <cstdlib>

#include "LinkedStack.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    LinkedStack x;
    
    x.push(3);
    x.push(2);
    x.push(4543);
    //x.show();
    x.pop();
    x.show();
    
    return 0;
}

