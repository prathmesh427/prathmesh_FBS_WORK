//2. Search the given number in array. 
#include<stdio.h>
void searchno(int[]);
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
	 
	 searchno(arr);
} 
void searchno(int arr[])
{
	printf("enter no for search: ");
	 int sea=arr[0];
	 int flag=1;
	 scanf("%d",&sea);
	 for (int i=0;i<5;i++)
	 {
	    if(arr[i]==sea)
	 	{
	 	   printf("element in index : %d \n",i);
	 	}
	 }
	 if(flag==0);
		{
			printf("element not found ");
		}
}
