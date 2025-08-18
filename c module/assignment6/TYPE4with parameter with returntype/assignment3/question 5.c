//Check the given number is Armstrong number or not.. 
//Input: n = 153  Output: Armstrong 
#include<stdio.h>
 int checkarmstrong(int,int,int,int);
 void main()
 {  int no,sum=0,rem;                           //153
 	printf("enter a number:");
 	scanf("%d",&no);
 	int temp=no;
 	
 	int res=checkarmstrong(no,sum,rem,temp);
 	if(res==1)
	 {
	 	printf("armstrong number");
	 }
	 else
	 {
	 	printf("not armstrong number");
	 }
 }
 int checkarmstrong(int no,int sum,int rem,int temp)
{
 
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
 
 