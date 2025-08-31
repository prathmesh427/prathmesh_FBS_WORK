//Find factorial of given number. 
//Input: n = 5  Output: 120 
#include<stdio.h>
 int findfactorial();
 void main()
 {
 int res=findfactorial();
	 printf("factorial is %d",res);
 } 
 int findfactorial()
 {
 	int no;                      //5,120
 	printf("enter the number: ");
 	scanf("%d",&no);
 	int i=no;
 	int fact=1;
 	
 	while(i>1)
 	{
 		fact=fact*i;
 		i--;
 		
	}
	return fact;
	 
	 
 }
 