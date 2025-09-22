//5. Print alternate elements in array.
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

    printf("Alternate elements in the array:\n");
    for (int i=0; i<5; i+=2) 
	{
        printf("%d\n", ptr[i]);
    }

    free(ptr); 
}
