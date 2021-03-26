//
//  medidasCentrales.c
//  
//
//  Created by Ramon Orraca on 25/03/21.
//

#include "medidasCentrales.h"

void calculateMean(browser content){
    int i = 0;
    float meanX = 0, meanY = 0;
    
    for(i=0; i<content.y*content.x; i++){
        meanX += content.matrix[i+1];
        meanY += content.matrix[i+2];
        i = i + 2;
    }
    meanX = meanX/content.y;
    meanY = meanY/content.y;
    
    printf("\n\tmean X: %f, mean Y: %f\n", meanX, meanY);
    
    return;
}

void calculateMedian(browser content){
    int i = 0, aux1, aux2, locX1, locX2, locY1, locY2;
    float medianX, medianY;
    
    
    if(content.y%2 == 0){
        aux1 = content.y/2;
        aux2 = (content.y/2)+1;
        medianX = (content.matrix[(aux1*3)-1] + content.matrix[(aux2*3)-1])/2;
        medianY = (content.matrix[(aux1*3)] + content.matrix[(aux2*3)])/2;
            printf("\n\tSIN SORT median X: %f, median Y: %f\n", medianX, medianY);
        }
    else printf("\n\tNo tengo tiempo de números impares, ¡perdón Cesarín!\n\n");

    return;
}
