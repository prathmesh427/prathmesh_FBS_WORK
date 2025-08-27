//9. Reverse the given array.
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
 	 int i,j;
 	 for(i=0, j=4;i<j;i++,j--)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
	}
	    printf("revers array:\n");
		for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	
 }