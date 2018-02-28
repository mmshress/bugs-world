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
    Bug(int s, int c, int r, int d, bool f){
        state = s;
        team = color(c);
        resting = r;
        direction = d;
        has_food = f;
        cout << "Bug has been init'd with following parameters: " << s << c << r << d << f << endl;
        
    }
    int get_state(){
        return state;
    }
    
    int get_resting(){
        return resting;
    }
    
    int get_direction(){
        return direction;
    }
    
    bool get_has_food(){
        return has_food;
    }
    
    int get_color(){ //this returns either a 0 or 1, i.e. black or red. 
        return team.get_c(); 
    }
    
    void set_state(int s){
        state = s;
    }
    
    void set_resting(int r){
        resting = r;
    }
    
    void set_direction(int d){
        direction = d;
    }
    
    void set_has_food(bool f){
        has_food = f;
    }
    
protected:
    int state = 0;
    int resting = 0;
    int direction = 0;
    bool has_food = 0;
    color::color team = color(0);
};


#endif /* BUG_H */

