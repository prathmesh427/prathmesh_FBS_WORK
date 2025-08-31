// Write a C program to convert given minutes into hours and remaining minutes. 
#include <stdio.h>
 void main()
 {
 	int min=140;
 	int hr;
 	
 	hr= min/60;
 	min= min%60;
 	
 	printf("140 minutes in hours=%d and %d",hr,min);
 	
 }