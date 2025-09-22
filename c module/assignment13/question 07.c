//7. Take two array and add sum in third array
//Examplearr[5]= {1,2, 3, 4,5}
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}

#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int* arr = (int*)malloc(5 * sizeof(int));
    int* brr = (int*)malloc(5 * sizeof(int));
    int* crr = (int*)malloc(5 * sizeof(int));

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    brr[0] = 10;
    brr[1] = 20;
    brr[2] = 30;
    brr[3] = 40;
    brr[4] = 50;

    printf("crr[5] = { ");
    for (int i = 0; i < 5; i++) {
    	
        crr[i] = arr[i] + brr[i];
        printf(" %d", crr[i]);
         
    }
    printf(" }");

    free(arr);
    free(brr);
    free(crr);
}
