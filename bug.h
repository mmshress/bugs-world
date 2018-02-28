/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bug.h
 * Author: whitebox
 *
 * Created on February 25, 2018, 10:39 PM
 */

#ifndef BUG_H
#define BUG_H

using namespace std;

#include "aux.h"
#include <string>

class Bug{
public:
    /*Getters and setters for bug variables*/
    Bug(){
        cout << "Bug has been initialized with default parameters. \n";
    };
    
    ~Bug(){};
    
    Bug(int s, int cl, int r, int dir, bool f){
        bstate.st = s;
        bcolor.c = cl;
        bdirection.d = dir;
        bresting = r;
        bhas_food = f;
        cout << "Bug has been init'd with following parameters: " << s << cl << r << dir << f << endl;
        
    }
    
    //Getter functions, as per bug.pdf
    int state(){
        return bstate.st;
    }
    
    int resting(){
        return bresting;
    }
    
    int direction(){
        return bdirection.d;
    }
    
    bool has_food(){
        return bhas_food;
    }
    
    int color(){ //this returns either a 0 or 1, i.e. black or red. 
        return bcolor.c; 
    }
    
    void set_color(int cl){
        bcolor.c = cl;
    }
    
    void set_state(int s){
        bstate.st = s;
    }
    
    void set_resting(int r){
        bresting = r;
    }
    
    void set_direction(int dir){
        bdirection.d = dir;
    }
    
    void set_has_food(bool f){
        bhas_food = f;
    }

//b stands for bug; so, bug state, bug color, etc.     
protected:
    aux::tstate bstate;
    aux::tcolor bcolor;
    aux::tdirection bdirection;
    int bresting = 0;
    bool bhas_food = false;
};


#endif /* BUG_H */

