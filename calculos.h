/*
 * Examen Parcial 1
 * @ Taller de Desarrollo de Aplicaciones
 * @ copyright 2021
 * @ author: Vergara Mendoza Monica Ivette
 * @ version 25/03/2021
*/

//biblioteca de procesos

#ifndef procesos_h
#define procesos_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef procesos_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/*
 * @function
 *  median- calcula la mediana del array
 * @params
 * datos ordenados
 * @return
 *  res- el resultado del proceso
 */
EXTERN float median(float array[]);



/*
 * @function
 *  mean- consigue el promedio de los datos
 * @params
 * arr[]- los datos del csv (ya ordenados)
 * @return
 *  res- el resultado del proceso
 */
EXTERN float mean(float array[]);



/*
 * @function
 *  mode- consigue la moda de los datos
 * @params
 * arr[]- los datos del csv (ya ordenados)
 * @return
 *  res- el resultado del proceso
 */
EXTERN int mode(float array[]);



/*
 * @function
 *  stdev-usa los datos y el promedio para conseguir la desviacion estandar
 * @params
 * arr[]- los datos del csv (ya ordenados)
 * mean- el promedio de los datos
 * @return
 *  res- el resultado del proceso
 */
EXTERN float stdev(float array[], float mean);


/*
 * @function
 *  rango- consigue el rango total de los datos
 * @params
 * arr[]- los datos del csv (ya ordenados)
 * @return
 *  res- el resultado del proceso
 */
EXTERN float rango(float array[]);



/*
 * @function
 * IQR- calcula la distancia intercuartil de los datos (calcula Q1 y Q3 antes)
 * @params
 * arr[]- los datos del csv (ya ordenados)
 * @return
 *  res- el resultado del proceso
 */
EXTERN float IQR(float array[]);




#endif /* procesos_h */
