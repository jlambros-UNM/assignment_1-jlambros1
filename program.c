//This is a program created by James Lambros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int arraySize[3];
    printf("We want 3 arrays. How big do you want them?  ");
    for(int i = 0; i < 3; i++){
        scanf("%d", &arraySize[i]);
        //printf("\n");
        //printf("%d", i); I was doing i++ twice :P
    }
    /*This is a debugging for loop to verify that the loop above works
    for(int i; i < 3; i++){
        printf("Size = %d \n", arraySize[i]);
    } */
    /*int arrayOne[arraySize[1]];
    int arrayTwo[arraySize[2]];
    int arrayThree[arraySize[3]]; */
    for(int i = 0; i < 3; i++){
        float arrayTemp[arraySize[i]];
        printf("Fill out array %d which is %d long. \n", i, arraySize[i]);
        for(int j = 0; j < arraySize[i]; j++){
            scanf("%f", &arrayTemp[j]);
        }
        printf("Done! \n");
        //Sum section
        float tempSum = 0;
        //int holdOver
        for(int k = 0; k < arraySize[i]; k++){
            tempSum = tempSum + arrayTemp[k];
        }
        printf("Sum of this array is %f \n", tempSum);
        //Average section
        float tempAverage = tempSum / arraySize[i];
        printf("Average of this array is %f \n", tempAverage);
        //Standard deviation section
        float tempDeviationHolder = 0;
        float tempDeviation = 0;
        for(int d = 0; d < arraySize[i]; d++){
            tempDeviationHolder = (arrayTemp[d] - tempAverage);
            tempDeviationHolder = tempDeviationHolder * tempDeviationHolder;
            tempDeviationHolder = (tempDeviationHolder / arraySize[i]);
            tempDeviation = tempDeviation + tempDeviationHolder;
        }
        tempDeviation = sqrt(tempDeviation);
        printf("STD of the array is %f \n", tempDeviation);
    }
}
/* Sources
 * https://stackoverflow.com/questions/5636070/zero-an-array-in-c-code
 * https://stackoverflow.com/questions/64853119/if-i-declare-a-variable-inside-a-for-loop-in-c-will-it-be-created-multiple-time
 * https://www.mathsisfun.com/data/standard-deviation-formulas.html
 * https://www.geeksforgeeks.org/c/scanf-in-c/
 * Notes
 * In the main loop that my code runs in, I noticed that I would continuously get errors, where the array filling and sum were holding their past values.
 * This was due to me not initalizing j, k, d and tempSum to 0, and that would lead to them holding their past value and messing with the loop.
 */

