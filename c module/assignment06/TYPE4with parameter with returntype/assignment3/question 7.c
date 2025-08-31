//Find factorial of given number. 
//Input: n = 5  Output: 120 
#include<stdio.h>
 int findfactorial(int,int,int);
 void main()
 {  int no;                      //5,120
 	printf("enter the number: ");
 	scanf("%d",&no);
 	int i=no;
 	int fact=1;
 	
     int res=findfactorial(no,i,fact);
	 printf("factorial is %d",res);
 } 
 int findfactorial(int no,int i,int fact)
 {
 	while(i>1)
 	{
 		fact=fact*i;
 		i--;
 		
	}
	return fact;
	 
	 
 }
 