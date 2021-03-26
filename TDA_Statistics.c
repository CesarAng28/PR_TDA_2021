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

int main(void){
  char nombreArchivo[50];
    FILE * arch1, * arch2, * arch3;
    int cont = 0,i,j, mod;
    float temp, media, mediana, desvE, Rang, DistInt;
    float *arr = malloc(100 * sizeof(float));

    printf("Inserte el nombre del archivo a leer: ");
    scanf("%s", nombreArchivo);

    arch1 = fopen(nombreArchivo, "r");

    for(cont = 0; cont < 100; cont ++){
        fscanf(arch1, "%f, %f", &arr[cont], &arr[cont]); /*Extraer datos del archivo */
    }

    for(i = 0; i < 99; i++){  /*Ordenar el array*/
        for(j = 0; j < 99 - i; j++){
            if(arr[j]> arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n ----Realizando calculos---\n");

    mediana = median( arr);
    media = mean( arr);
    mod = mode(arr);

    desvE = stdev(arr,media);
    Rang = rango(arr);
    DistInt = IQR(arr);

    arch2 = fopen("TDA_Statistics.csv", "w");
    arch3 = fopen("gráfico.csv", "w");

    imprimirRes(mediana,media,mod,desvE,Rang,DistInt,arch2);
    imprimirHist(arr,arch3);

    free(arr);
    fclose(arch1);
    fclose(arch2);
    fclose(arch3);
    printf("Fin de proceso\n");
}
