//Write a C program to input five numbers and find their average.
#include <stdio.h>
 void main()
 {
 	int no1=10;
	int no2=20;
	int no3=30;
	int no4=40;
	int no5=50;
 	
 	int sum= no1+no2+no3+no4+no5;
 	int avg; 
 	avg= sum/5;
 	
 	printf("average of five numbers is %d ",avg);
 }