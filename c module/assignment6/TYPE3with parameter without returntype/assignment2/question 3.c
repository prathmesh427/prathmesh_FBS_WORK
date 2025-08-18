//Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
 void checkgreatest(int,int,int);
 void main()
 {
 	int a;
 	int b;
 	int c;
 	printf("enter the numbers:",a,b,c);
 	scanf("%d%d%d",&a,&b,&c);
	 checkgreatest(a,b,c);
 }
 void checkgreatest(int a,int b,int c)
 {
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
 