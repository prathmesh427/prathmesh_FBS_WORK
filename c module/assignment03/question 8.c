//Check the given number is Strong number or not. 
//Input: n = 145  Output: Strong 
#include <stdio.h>
 void main()
 {
 	int num=145,rem,sum=0,i,fact=1;
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
	  printf("strong number");
	}
	else
	{
	  printf("not strong number");
	}
 }