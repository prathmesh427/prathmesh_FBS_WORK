//3. Find sum of all numbers. 
#include<stdio.h>
 void main()
 {
 	int arr[5];
 	printf("enter 5 numbers:\n");
 	for(int i=0;i<5;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	printf("display array:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}

	int sum=0;
 	for(int i=0;i<5;i++)
 	{
 		sum=sum+arr[i];
	}
	printf("addition of total numbers in array :%d",sum);
 }