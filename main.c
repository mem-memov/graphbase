/* 
 * File:   main.c
 * Author: u
 *
 * Created on July 11, 2014, 9:30 PM
 */

#include "main.h"
/*
 * 
 */
int main(int argc, char** argv) {
    
    Value *zero = createValue(); 
    Value *one = createValue(); 

    connectNodes(zero, one);

    return (EXIT_SUCCESS);
}

