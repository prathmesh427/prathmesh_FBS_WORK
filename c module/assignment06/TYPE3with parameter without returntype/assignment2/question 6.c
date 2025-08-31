//Accept a number and check if it is divisible by 3, 5, or both.
#include <stdio.h>
 void checkdivisible(int);
 void main()
 {
 	int no;
 	printf("enter number: ");
 	scanf("%d",&no);
	checkdivisible(no);
 }
 void checkdivisible(int no)
 {
    if(no%3==0 && no%5==0)
 	{
 		printf("Divisible by both");
 	}
	else if(no%3==0 && no%5!=0)
	   
	   printf("Divisible by 3 but not by 5");
	   
	   else if (no%3!=0 && no%5==0)
	   	
		printf("Divisible by 5 but not by 3");
	   
	    else
	    {
	      printf("Divisible by None");
		}
		
 }
 
 