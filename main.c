//
//  main.c
//  
//
//  Created by Ramon Orraca on 25/03/21.
//

#include "main.h"

int main(){
    browser content;
    float meanX, meanY;
    
    content = createMatrix();
//    printMatrix(content);
    calculateMean(content);
    calculateMedian(content);
    
    return(0);
}
