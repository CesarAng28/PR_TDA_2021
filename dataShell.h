//
//  dataShell.h
//  
//
//  Created by Ramon Orraca on 25/03/21.
//

#ifndef dataShell_h
#define dataShell_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct browserTemp{
    int x, y;
    float *matrix;
} browser;

/* Function declaration */

FILE *openFile(char *fileName);

browser readCSV(FILE *fp);

void appendToMatrix(char *number, browser content, int xCurrent);

int verifyX(int i, int xTemp, int xCurrent);

#endif /* dataShell_h */
