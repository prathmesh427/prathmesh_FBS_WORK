//Write a program to check whether a person is eligible to vote (age = 18).
#include <stdio.h>
 void checkeligible(int);
 void main ()
 {
 	int age;
	printf("enter a age: ");
 	scanf("%d",&age);
	 checkeligible(age);
 }
 void checkeligible(int age)
 {
 	if(age>=18)
 	{
 		printf("eligible to vote");
	}
	else
	{
		printf("not eligible to vote");
	}
 }
   
 
 