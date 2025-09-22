//4. Find odd and even among the numbers. 
#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int* ptr = (int*)malloc(5 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    printf("Even numbers in the array:\n");
    for (int i = 0; i < 5; i++) 
	{
        if (ptr[i] % 2 == 0) 
		{
            printf(" %d,",ptr[i]);
        }
    }

    printf("\nOdd numbers in the array:\n");
    for (int i=0;i<5;i++) 
	{
        if (ptr[i] % 2!= 0) 
		{
            printf(" %d,",ptr[i]);
        }
    }

    free(ptr); 
}

