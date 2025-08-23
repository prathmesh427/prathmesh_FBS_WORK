//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the 
//desired operations. 
#include<stdio.h>
void calculator(int*,int*,char*);
void main()
{
		int num1,num2;
 	char op;
 	
	printf("Enter the first number: ");
 	scanf("%d",&num1);
 	
	printf("Enter an operator(+,-,*,/,%): ");
 	scanf(" %c",&op);
 	
	printf("Enter the second number: ");
 	scanf("%d",&num2);
	 
	 calculator(&num1,&num2,&op);
}
void calculator(int*num1,int*num2,char*op )
{
	if(*op=='+')
 	{
 		printf("Result = %d\n",*num1 + *num2);
	}
	else if(*op=='-')
	{
		printf("Result = %d\n",*num1 - *num2);
	} 
	else if(*op=='*')
	{
		printf("Result = %d\n",*num1 * *num2);
	}
	else if(*op=='/')
	{
	   	if(num2 !=0)
		    printf("Result = %d\n",*num1/ *num2);
	}
	else if(*op=='%')
	{
		if(num2 !=0)
		printf("result= %d\n",*num1 % *num2);
	}
	else
	{
		printf("invalid operator.\n");
	}  	
 }
