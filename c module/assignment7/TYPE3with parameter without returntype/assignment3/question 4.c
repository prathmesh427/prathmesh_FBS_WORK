//Check the given number is prime or not. 
//Input: n = 7  Output: Prime 
#include<stdio.h>
 void checkprime(int*,int*,int*);
 void main()
{
	int no, i=2,status= 0;
	printf("enter a number: ");
	scanf("%d",&no);
	checkprime(&no,&i,&status);
}
 void checkprime(int* no,int* i,int* status)
  {
 	while(*i <= *no/2)
 	{
 		if((*no)%(*i)==0)
 		{
 			*status=1;
 			break;
 		}
 		(*i)++;
	}
 		if(*status==0)
		{
			printf("prime number");
		}
		else
		{
			printf("not prime number");
		}
	 
 }