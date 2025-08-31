//Check the given number is Armstrong number or not.. 
//Input: n = 153  Output: Armstrong 
#include<stdio.h>
 int checkarmstrong();
 void main()
 {
 	int res=checkarmstrong();
 	if(res==1)
	 {
	 	printf("armstrong number");
	 }
	 else
	 {
	 	printf("not armstrong number");
	 }
 }
 int checkarmstrong()
{
 	int no,sum=0,rem;                           //153
 	printf("enter a number:");
 	scanf("%d",&no);
 	int temp=no;
 	
 	while(no>0)
 	{
 	  rem=no%10;
	  sum=sum+rem*rem*rem;
	  no=no/10;	
	}
	 if(temp==sum)
	 {
	 	return 1;
	 }
	 else
	 {
	 	return 0;
	 }
 }
 
 