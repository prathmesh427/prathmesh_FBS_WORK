//Check the given number is Perfect number or not. 
// Input: n = 28  Output: Perfect 
#include<stdio.h>
void main()
{
	int no=28;
	int sum=0;
	int i=1;
	
	while(i<no)
	{
		if(no%i==0)
		sum=sum+i;
		i++;
	}
	 if(no==sum)
	 {
	 	printf("perfect number");
	 }
	 else
	 {
	 	printf("not perfect number");
	 }
}