//Check the given number is Armstrong number or not.. 
//Input: n = 153  Output: Armstrong 
#include<stdio.h>
 
 void checkarmstrong();
 void main()
 {
 	checkarmstrong();
 }
 void checkarmstrong()
{
 	int no=370,sum=0,rem;
 	int temp=no;
 	
 	while(no>0)
 	{
 	  rem=no%10;
	  sum=sum+rem*rem*rem;
	  no=no/10;	
	}
	 if(temp==sum)
	 {
	 	printf("armstrong number");
	 }
	 else
	 {
	 	printf("not armstrong number");
	 }
 }
 
 