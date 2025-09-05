//2. WAP to add alternate numbers from given range.
//eg. i/p: start= 1, end= 5
//o/p: sum= 9
#include<stdio.h>
void main()
{
	int start,end,sum=0;
	printf("enter a first number for alernet addition :");
	scanf("%d",&start);
	printf("enter a last number for alternet addition :");
	scanf("%d",&end);
	
	for(int i=1;i<=end;i=i+2)
		sum=sum+i;
		{
			printf("%d",sum);
		}
		
		
	
}