//Write a program to check whether a number is even or odd. 
#include<stdio.h>
void getevenodd(); // decleration
 void main()
 {
 	getevenodd(); // call
 	
 }
 void getevenodd() // defination
  {
  	int no=14;
 	
	  if(no%2==0)
	  {
	  	printf("number is even");
	  }
	  else
	  {
	  	printf("number is odd");
	  }
  }