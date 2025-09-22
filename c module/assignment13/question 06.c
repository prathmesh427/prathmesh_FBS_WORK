//6.Accept array and print only prime numbers of array.
#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int* ptr = (int*)malloc(5 * sizeof(int));
    
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 37;
    ptr[3] = 41;
    ptr[4] = 7;

    printf("Prime numbers in the array:\n");

    for (int i = 0; i < 5; i++) {
    	
        int num = ptr[i];
        int isPrime = 1;

        if (num < 2) 
		{
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) 
			{
                if (num % j == 0) 
				{
                    isPrime=0;
                    break;
                }
            }
        }

        if (isPrime) 
		{
            printf("%d ",num);
        }
    }

    printf("\n");

    free(ptr);
}
