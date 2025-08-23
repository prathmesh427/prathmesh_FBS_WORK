//Check the given number is Perfect number or not. 
// Input: n = 28  Output: Perfect 
#include<stdio.h>
void checkperfect(int*,int*,int*);
void main()
{
	int no;	
	int sum=0;
	int i=1;
	printf("enter a number: ");
	scanf("%d",&no);
	checkperfect(&no,&sum,&i);
}
void checkperfect(int*no,int*sum,int*i)
{
	while(*i<*no)
	{
		if(*no%(*i)==0)
		*sum=*sum+(*i);
		(*i)++;
	}
	 if(*no==*sum)
	 {
	 	printf("perfect number");
	 }
	 else
	 {
	 	printf("not perfect number");
	 }
}

