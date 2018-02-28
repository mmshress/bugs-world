/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Marker.h
 * Author: mohit
 *
 * Created on February 28, 2018, 11:21 PM
 */

#ifndef MARKER_H
#define MARKER_H

#include "aux.h"
#ifdef __cplusplus
extern "C" {
#endif
    class Marker{ //TODO have code in the source file instead of the header file
    private:
        unsigned int bits;
    public:
        Marker(){
            bits = 0; //set all bits to 0 at initialization
        }
        
        void set_marker(aux::tmark mark, aux::tcolor color){
            switch(color.c){
                case 0: //black
                    bits |= (1UL << mark.m); //sets bit mark.m from the right by shifting 0000000001 left by mark.m places
                    break;
                case 1://red
                    bits |= (1UL << (mark.m + 6)); //sets bit (mark.m + 6) from the right
                    break;
            }
        };
        void clear_marker(aux::tmark mark, aux::tcolor color){
            switch(color.c){
                case 0://black
                    bits &= ~(1UL << mark.m); //unsetting the bit mark.m from the right by shifting 000000001 left and negating/ AND gating
                    break;
                case 1://red
                    bits &= ~(1UL << (mark.m + 6));
                    break;
            }
            
        };
        bool check_marker(aux::tmark mark, aux::tcolor color){
            int bit;
            switch(color.c){
                case 0://black
                    bit = (bits >> mark.m) & 1U;
                    return(bit == 1);
                case 1://red
                    bit = (bits >> (mark.m + 6)) & 1U;
                    return (bit == 1);
            }
        };
        bool check_other_marker(aux::tcolor color){
            int bit;
            switch(color.c){
                case 0://black
                    for(int i = 0; i < 5; i++){
                        bit = (bits >> i) & 1U;
                        if(bit == 1) return true;
                    }
                    return false;
                case 1://red
                    for(int i = 0; i < 5; i++){
                        bit = (bits >> (i + 5)) & 1U;
                        if(bit == 1) return true;
                    }
                    return false;
            }
        };
    };



#ifdef __cplusplus
}
#endif

#endif /* MARKER_H */

