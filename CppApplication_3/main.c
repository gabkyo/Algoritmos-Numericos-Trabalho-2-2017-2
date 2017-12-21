/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 2014102150
 *
 * Created on 21 de Dezembro de 2017, 10:59
 */

#include <stdio.h>
#include <stdlib.h>
#include "problemas.h"
/*
 * 
 */
int main(int argc, char** argv) {
    FILE *arquivo;
    arquivo=fopen("output.txt","w");
    if(arquivo!=NULL){
    problema_1(10,10,256,64,arquivo);
    }
    fclose(arquivo);
    
    return (EXIT_SUCCESS);
}

