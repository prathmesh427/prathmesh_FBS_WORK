//Write a program to check whether a given year is a leap year. 
#include <stdio.h>
void checkleap(int);
 void main()
 {
 	
	 int year;                           
 	printf("enter a year: ");
 	scanf("%d",&year);
	 checkleap(year);
 }
 void checkleap(int year)
 {
 	
 	if(year%4==0 && year%100!=0 || year%400==0)
 	{
 		printf("year is a leap year");
	}
	else 
	{
		printf("year is not a leap year");
	}
 
 }
 