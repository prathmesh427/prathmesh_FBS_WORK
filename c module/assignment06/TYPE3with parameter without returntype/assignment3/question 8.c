//Check the given number is Strong number or not. 
//Input: n = 145  Output: Strong 
#include <stdio.h>
 void checkstrong();
 void main()
 {
 	int num;
 	printf("enter a number: ");
	scanf("%d",&num);
	int rem,sum=0,i,fact=1;
 	int temp=num;
 	checkstrong(num,rem,sum,i,fact,temp);
 }
 void checkstrong(int num,int rem,int sum,int i,int fact,int temp)
 {
 	while(temp>0)
 	{ 
 	  fact=1;
 	  rem=temp%10;
 	  
 	  for(i=1;i<=rem;i++)
 	  {
 	  	fact=fact*i;
	  }
	 	sum=sum+fact;
	    temp=temp/10;
	}
	if(sum==num)
	{
	  printf("strong number");
	}
	else
	{
	  printf("not strong number");
	}
 }
 