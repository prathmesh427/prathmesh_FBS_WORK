//Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
 void checkgreatest();
 void main()
 {
 	checkgreatest();
 }
 void checkgreatest()
 {
 	{
 	int a=100,b=20,c=30;
 	
 	if(a>b)
 	{
 	  if(a>c)
 	  {
	   printf("a is greater");
	  }
 	  else
 	  {
	   printf("c is greater");
      }
	}
	else
	{
		if (b>c)
		{
		printf("b is greater");
		}
		else
		{
		printf("c is greater");
	    } 
	}
 }
 }