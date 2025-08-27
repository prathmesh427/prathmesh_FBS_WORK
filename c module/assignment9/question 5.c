//5. Print alternate elements in array.
#include<stdio.h>
void alternate(int[]);
void main()
{
	int arr[6];
	alternate(arr);
}
void alternate(int arr[])
{
	printf("enter 6 numbers:\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("display array:\n");
	for(int i=0;i<6;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("alternate numbers:\n");
	for(int i=0;i<6;i=i+2)
	{
		printf("%d\n",arr[i]);
	}
}