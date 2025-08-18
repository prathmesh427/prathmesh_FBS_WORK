//Check the given number is Strong number or not. 
//Input: n = 145  Output: Strong 
#include <stdio.h>
 int checkstrong();
 void main()
 {
 	int res=checkstrong();
 	if(res==1)
	{
	  printf("strong number");
	}
	else
	{
	  printf("not strong number");
	}
 }
 int checkstrong()
 {
 	int num,rem,sum=0,i,fact=1;          //145
	printf("enter a number: ");
	scanf("%d",&num);
	
 	int temp=num;
 	
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
	  return 1;
	}
	else
	{
	  return 0;
	}
 }
 