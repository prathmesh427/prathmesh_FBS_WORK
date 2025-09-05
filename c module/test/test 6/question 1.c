//write a program in c for to find common element in two array
//egg arr=1 2 3 4 5 
//brr=1 6 7 3 2
//out out = 1 2 3
#include <stdio.h>
void main() 
{
    int arr[5], brr[5];
    
    printf("Enter 5 elements for first array:\n");
    for(int i = 0; i < 5; i++)
	{
        scanf("%d",&arr[i]);
    }
    
    printf("Enter 5 elements for second array:\n");
    for(int i = 0; i < 5; i++) 
	{
        scanf("%d",&brr[i]);
    }

    printf("Common elements are: ");
    for(int i = 0; i < 5; i++) 
	{
        for(int j = 0; j < 5; j++) 
		{
            if(arr[i] == brr[j])
			{
               printf("%d ", arr[i]);
                 
            }
        }
    }

    printf("\n");
}
