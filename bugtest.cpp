/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bugtest.cpp
 * Author: whitebox
 *
 * Created on February 25, 2018, 11:16 PM
 */

#include <cstdlib>
#include "bug.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Bug::Bug b = Bug::Bug(1, 1, 1, 1, 1);
    cout << b.color();
    cout << b.direction();
    cout << b.has_food();
    cout << b.resting();
    cout << b.state();
    
    return 0;
}

