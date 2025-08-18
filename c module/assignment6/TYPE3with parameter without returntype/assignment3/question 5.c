//Check the given number is Armstrong number or not.. 
//Input: n = 153  Output: Armstrong 
#include<stdio.h>
 void checkarmstrong(int,int,int);
 void main()
 {
 	int no,sum=0,rem;
 	printf("enter a number: ");
	scanf("%d",&no);
	checkarmstrong(no,sum,rem);
 }
 void checkarmstrong(int no,int sum,int rem)
{
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
 
 