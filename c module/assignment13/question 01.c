//1. Find minimum and maximum number in array. 
#include <stdio.h>
#include <stdlib.h>
void max(int*,int);
void min(int*,int);
void main() 
{
    int size=5;
    int* ptr=(int*)malloc(size*sizeof(int));
   
    printf("Enter elements of the array: %d \n", size);
    for (int i=0;i<size;i++) 
	{
        scanf("%d",ptr+i);
    }

    max(ptr,size);
    min(ptr,size);

    free(ptr);       // Free the allocated memory
}

void max(int*arr,int size) 
{
    int max = arr[0];
    for (int i=1;i<size;i++)
	 {
        if (arr[i]>max) 
		{
            max=arr[i];
        }
    }
    printf("Maximum number in array is %d\n",max);
}

void min(int*arr,int size) 
{
    int min=arr[0];
    for (int i=1;i<size;i++)
	 {
        if (arr[i]<min)
		{
            min=arr[i];
        }
    }
    printf("Minimum number in array is %d\n",min);
}
