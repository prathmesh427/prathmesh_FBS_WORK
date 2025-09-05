//1. WAP Print even and odd numbers in a given range.
//eg. i/p: start= 10, end= 25
//o/p: odd: 11 13 15 17 19 21 23 25
//eg. i/p: start= 1, end= 15
//o/p: even: 2 4 6 8 10 12 14

#include<stdio.h>
void main()
{
	int start ,end ,i,start1,end1,s;
	printf("enter a start of even number :");
	scanf("%d",&start);
	printf("enter a end even number :");
	scanf("%d",&end);
	printf("enter a start of odd number :");
	scanf("%d",&start1);
	printf("enter a end odd number :");
	scanf("%d",&end1);
	
	printf("even :");
	for(i=start;i<=end;i++)
	{
	  if(i%2==0){
	  	printf("%d ",i);
	  }
		
	}
	printf("\nodd :");
	for(s=start1;s<=end1;s++)
	{
	  if(s%2!=0){
	  	printf("%d ",s);
	  }
		
	}
	
}