//Write a C program to swap two numbers using a temporary third variable.

#include <stdio.h>
  void main()
  {
  	int a= 11;
  	int b= 22;
  	int temp;
  	 temp=a;
  	 a=b;
  	 b=temp;
  	 
  	 printf("a=%d b=%d", a,b);
  }