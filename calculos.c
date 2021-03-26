/*
 * Examen Parcial 1
 * @ Taller de Desarrollo de Aplicaciones
 * @ copyright 2021
 * @ author: Vergara Mendoza Monica Ivette
 * @ version 25/03/2021
*/
#include "main.h"
#include "calculos.h"
#include "files.h"

float median(float array[]){
    float res;
    res = ((array[44] + array[43])/2);
    return res;
}

int mode(float array[]){
    int res,cont,x,max;
    for(cont = 0; cont < 100; cont ++){
        int num = 0;
        for(x = 0; x < 100; x ++){
            if((int)array[x] == (int)array[cont]){
                num ++;
            }
        }
        if(num > max){
            max = num;
            res = (int)array[cont];
        }
    }
    return res;
}

float mean(float array[]){
    float res;
    int cont;
    for(cont = 0; cont < 100; cont ++){
        res += array[cont];
    }
    res /= 100;


    return res;
}

float stdev(float array[], float mean){
    float res;
    int cont;

    for(cont = 0; cont < 100; cont ++){
        res += pow(array[cont]-mean,2);
    }
    res /= 100;

    return res;
}

float rango(float array[]){
    float res;

    res = array[99] - array[0];

    return res;
}

float IQR(float array[]){
    float res, Q1, Q3;
    Q1 = (array[10]+array[11])/2;
    Q3 = (array[36]+array[37])/2;
    res = Q3 - Q1;

    return res;
}
