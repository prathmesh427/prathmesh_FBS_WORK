//Write a program to check whether a number is even or odd. 
#include<stdio.h>
int getevenodd(int); // decleration
 void main()
 { 
   int no;
   printf("enter a number: ");
   scanf("%d",&no);
 	int res = getevenodd(no); // call
 	if(res==1)
	{
	 printf("number is even");
	}
	  else
	  {
	  	printf("number is odd");
	  }
 	
 }
 int getevenodd(int no) // defination
  {
  	
 	return (no%2==0);
	  
  }