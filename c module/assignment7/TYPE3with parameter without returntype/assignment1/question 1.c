//Write a program to check whether a number is even or odd. 
#include<stdio.h>
void getevenodd(int* ); // decleration   only datatype.
 void main()
 {
 	int no;
 	printf("enter a number: ");
 	scanf("%d",&no);
	 getevenodd(&no); // call             value of variable without datatye
 	
 }
 void getevenodd(int* no) // defination       variable with datatype.
  {
  
 	
	  if(*no%2==0)
	  {
	  	printf("number is even");
	  }
	  else
	  {
	  	printf("number is odd");
	  }
  }