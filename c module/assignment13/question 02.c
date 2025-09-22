//2. Search the given number in array. 
#include <stdio.h>
#include <stdlib.h>
void searchno(int* arr, int size);

void main() {
    int size = 5;
    int*arr=(int*)malloc(size*sizeof(int));
    
	printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Display array:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d\n", arr[i]);
    }

    searchno(arr, size);

    free(arr);
}

void searchno(int* arr, int size) 
{
    int sea;
    int flag = 0;

    printf("Enter number to search: ");
    scanf("%d", &sea);

    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == sea) 
		{
            printf("Element found at index: %d\n", i);
            flag = 1;
        }
    }

    if (flag == 0) 
	{
        printf("Element not found\n");
    }
}
