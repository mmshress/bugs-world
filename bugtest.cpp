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
    cout << b.get_color();
    cout << b.get_direction();
    cout << b.get_has_food();
    cout << b.get_resting();
    cout << b.get_state();
    
    return 0;
}

