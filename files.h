/*
 * Examen Parcial 1
 * @ Taller de Desarrollo de Aplicaciones
 * @ copyright 2021
 * @ author: Vergara Mendoza Monica Ivette
 * @ version 25/03/2021
*/
#ifndef files_h
#define files_h

#include <stdio.h>
#include <stdlib.h>

#ifndef files_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN void imprimirRes(float mediana,float media,int mod,float stDev,float Rang,float DistInt,FILE * arch2);


EXTERN void imprimirHist(float arr[],FILE * arch3);

#endif
