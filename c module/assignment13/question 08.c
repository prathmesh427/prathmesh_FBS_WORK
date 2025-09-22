//8. Merge two arrays
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size1 = 5;
    int size2 = 5;

    int* arr = (int*)malloc(size1 * sizeof(int));
    int* brr = (int*)malloc(size2 * sizeof(int));
    int* crr = (int*)malloc((size1 + size2) * sizeof(int));

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

    for (int i = 0; i < size1; i++) 
	{
    	crr[i] = arr[i];
    }

   
    for (int i = 0; i < size2; i++) 
	{
        crr[size1 + i] = brr[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) 
	{
    	
        printf("%d ", crr[i]);
    }
    printf("\n");

    free(arr);
    free(brr);
    free(crr);

}

