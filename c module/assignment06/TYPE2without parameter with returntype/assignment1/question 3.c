//Write a program to check whether a given year is a leap year. 
#include <stdio.h>
int checkleap();
 void main()
 {
  int res =	checkleap();
 	if(res==1)
 	{
 		printf("year is a leap year");
	}
	else 
	{
		printf("year is not a leap year");
	}
 }
 int checkleap()
 {
 	{
 	int year= 2004;
 	if(year%4==0 && year%100!=0 || year%400==0)
 	return 1;
	else 
	return 0;
 }
 }
 