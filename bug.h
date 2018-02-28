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
        state.st = s;
        color.c = cl;
        direction.d = dir;
        resting = r;
        has_food = f;
        cout << "Bug has been init'd with following parameters: " << s << c << r << d << f << endl;
        
    }
    int get_state(){
        return state.st;
    }
    
    int get_resting(){
        return resting;
    }
    
    int get_direction(){
        return direction.d;
    }
    
    bool get_has_food(){
        return has_food;
    }
    
    int get_color(){ //this returns either a 0 or 1, i.e. black or red. 
        return color.c; 
    }
    
    void set_color(int cl){
        color.c = cl;
    }
    
    void set_state(int s){
        state.st = s;
    }
    
    void set_resting(int r){
        resting = r;
    }
    
    void set_direction(int dir){
        direction.d = dir;
    }
    
    void set_has_food(bool f){
        has_food = f;
    }
    
protected:
    aux::tstate state;
    aux::tcolor color;
    aux::tdirection direction;
    int resting = 0;
    bool has_food = false;
};


#endif /* BUG_H */

