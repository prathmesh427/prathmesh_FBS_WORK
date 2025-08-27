//8. Merge two arrays
#include<stdio.h>
 void mergearray(int[],int[],int[]);
 void main()
 {
 	int arr[5]={1,2,3,4,5};
 	int brr[5]={6,7,8,9,10};
 	int crr[10];
 	 
 	 mergearray(arr,brr,crr);
	 
 }
 void mergearray(int arr[],int brr[],int crr[])
 {
 	 for(int i=0;i<10;i++)
 	 {
 	 	crr[i]=arr[i];
	 }
	 for(int i=0;i<10;i++)
 	 {
 	 	crr[i+5]=brr[i];
	 }
	 printf("merge array:\n");
	 for (int i = 0; i < 10; i++) 
	 {
        printf("%d ", crr[i]);
     }
	  
 }