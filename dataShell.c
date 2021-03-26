//
//  dataShell.c
//  
//
//  Created by Ramon Orraca on 25/03/21.
//

#include "dataShell.h"

/*
 *
 * The function create matrix reads the csv file and creates the matrix with data.
 *

 * @returns
        void
*/
browser createMatrix(){
    char file[25];
    FILE *fp;
    browser content;

    printf("\n\tPlease enter the name of the file you'll transform (CSV with floats)\n -> ");
    scanf(" %s", file);
    fp = openFile(file);
    content = readCSV(fp);

    return(content);
}

/*
 *
 * The function openFile opens the file the user entered and returns it's FILE*.
 *
 * @params
 *      fileName (string):
            This is the name of the file we're going to use.

 * @returns
        fp (FILE*)
            This is the file pointer of the file we just opened.
*/
FILE *openFile(char *fileName){
   FILE *fp;

   fp = fopen(fileName, "r");
   if(fp == NULL){
      printf("\n\tArchivo no disponible.");
      exit(1);
   }

return(fp);
}

/*
 *
 * The function readCSV reads the .csv file the user entered and makes a matrix from it.
 *
 * @params
 *      fp (FILE*):
            This is the file pointer of the file we're reading.

 * @returns
        content (browser)
            The information of our matrix.
*/
browser readCSV(FILE *fp){
   browser content;
   char line[40], *temp;
   int xTemp, i = 0;

   content.matrix = malloc(sizeof(float)*BUFSIZ);
   content.y = 0;
    
   while(fgets(line, 40, fp) != NULL){
       if(i==0);
       else{
           xTemp=0;
           temp = strtok(line, ",");
           while(temp != NULL){
               appendToMatrix(temp, content, xTemp);
//               printf("%f, %d\n", content.matrix[j], j);
               temp = strtok(NULL, ",");
               xTemp++;
           }
           content.x = verifyX(content.y, xTemp, content.x);
           content.y++;
       }
       i++;
   }

   fclose(fp);

return(content);
}

/*
 *
 * The function appendToMatrix sends the information we read from the file to a matrix.
 *
 * @params
 *      number (string):
            This is the number we want to add to the matrix as a string.
        content (browser):
            The  of our matrix's information.
        xCurrent (int):
            This is the column we're in right now.

 * @returns
        void
*/
void appendToMatrix(char *number, browser content, int xCurrent){

    content.matrix[((content.y*3)+xCurrent)] = strtof(number, NULL);
    
    return;
}

/*
 *
 * The function verifyX verifies that the file's format is consistant in it's number of columns.
 *
 * @params
 *      i (int):
            This is the iteration we're in right now.
        xTemp (int):
            This is the number of columns in the current iteration
        xCurrent (int):
            When i=0 it takes the value of xTemp from that iteration an compares that number on the following iterations, it's the variable b$

 * @returns
        fpConvert (FILE*)
            This is the file pointer of the new file we created.
*/
int verifyX(int i, int xTemp, int xCurrent){

   if(i==0) xCurrent = xTemp;
   if(xCurrent != xTemp){
      printf("\n\n\tInconsistent file, columns are not consistent.\n");
      exit(1);
   }

return(xCurrent);
}

/*
 *
 * The function printMatrix prints the content of our matrix.
 *
 * @params
        content (browser):
            This is the browser with our array's information.

 * @returns
        void
*/
void printMatrix(browser content){
   int i;

   printf("\n   x: %d, y: %d\n\n", content.x, content.y);
   for(i=0; i<content.y*content.x; i++){
       printf("   ID: %f\t value 1: %f\t value 2: %f\n", content.matrix[i], content.matrix[i+1], content.matrix[i+2]);
      i = i + 2;
   }

return;
}
