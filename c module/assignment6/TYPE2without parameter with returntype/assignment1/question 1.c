//Write a program to check whether a number is even or odd. 
#include<stdio.h>
int getevenodd(); // decleration
 void main()
 { int res;
 	res = getevenodd(); // call
 	if(res==1)
	{
	 printf("number is even");
	}
	  else
	  {
	  	printf("number is odd");
	  }
 	
 }
 int getevenodd() // defination
  {
  	int no=147;
 	
	  return (no%2==0);
	  
  }