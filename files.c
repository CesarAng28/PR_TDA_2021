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

void imprimirRes(float mediana,float media,int mod,float stDev,float Rang,float DistInt,FILE * arch2){
  printf("\n...Imprimiendo resultados en archivo TDA_Statistics.csv\n");
    fprintf(arch2, "Mediana: , %f\n",mediana);
    fprintf(arch2, "Media: , %f\n",media);
    fprintf(arch2, "Moda: , %d\n",mod );
    fprintf(arch2, "Desviacion Estandar: , %f\n",mediana );
    fprintf(arch2, "Rango: , %f\n",Rang );
    fprintf(arch2, "Distancia intercuartíl: , %f\n",DistInt );
}

void imprimirHist(float arr[],FILE * arch3){
    int cont;

    for(cont = 0; cont < 100; cont ++){
        fprintf(arch3,"%d ,%d\n",cont, (int)arr[cont]);
    }
    printf("\n...Imprimiendo datos para gráfico\n");
}
