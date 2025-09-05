//2: Write a program to find power of any number. Eg 2^4 = 16.
#include<stdio.h>
 void main()
{
   int base,exponent;
	printf("enter a base:");
	scanf("%d",&base);
	printf("enter a exponent:");
	scanf("%d",&exponent);
	int result=1;
	
	for(int i=1;i<=exponent;i++)
	{
		result=result*base;
	}
	printf("The power of %d=%d",base,result);

}
 
