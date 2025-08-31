//Find factorial of given number. 
//Input: n = 5  Output: 120 
#include<stdio.h>
 void findfactorial(int*,int*,int*);
 void main()
 {
	int no;
	int fact=1;
	printf("enter a number: ");
	scanf("%d",&no);
	int i=no;
	findfactorial(&no,&i,&fact);
 } 
 void findfactorial(int* no,int* i,int* fact)
 {
 	while(*i>1)
 	{
 		*fact=*fact * (*i);
 		(*i)--;
	 }
	 printf("factorial of %d is %d",*no,*fact);
 }
 