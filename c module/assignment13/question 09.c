//9. Reverse the given array
#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int* ptr = (int*)malloc(5 * sizeof(int));
    
    ptr[0] = 11;
    ptr[1] = 12;
    ptr[2] = 13;
    ptr[3] = 14;
    ptr[4] = 15;

    printf("Reversed array:\n");
    for (int i = 4; i >= 0; i--) 
	{
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr); 
}
