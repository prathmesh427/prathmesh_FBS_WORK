//Write a program to check whether a given year is a leap year. 
#include <stdio.h>
int checkleap(int);
 void main()
 {  int year;
    printf("enter a year: ");
    scanf("%d",&year);
    int res =	checkleap(year);
 	if(res==1)
 	{
 		printf("year is a leap year");
	}
	else 
	{
		printf("year is not a leap year");
	}
 }
 int checkleap(int year)
 {
 	
 	if(year%4==0 && year%100!=0 || year%400==0)
 	return 1;
	else 
	return 0;
 
 }
 