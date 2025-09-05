//write a program in c to find two maximum number in array..

#include<stdio.h>
void main()
{
	printf("Enter 5 elements for first array:\n");		
	int arr[5];
	for(int i=0;i<5;i++)
	{
     scanf("%d",&arr[i]);
	}
	
	printf("\nmaximum no in the array:");
    int max=arr[0];
	for(int i=1;i<5;i++)
	{
		if(arr[i]>max)
		{	
			max=arr[i];
		}
	}
	printf("%d",max);
	
	printf("\nsecond maximum number in array:");
    int smax=arr[0];
	for(int i=1;i<5;i++)
	{
		if(arr[i]>smax&&arr[i]!=max)
		{	
			smax=arr[i];
		}
	}
	printf("%d",smax);
	
	
}