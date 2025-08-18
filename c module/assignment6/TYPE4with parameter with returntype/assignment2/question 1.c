//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the 
//desired operations. 
#include<stdio.h>
int calculator(int,char,int);
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
 	
	int res = calculator(num1,op,num2);
	printf("Result = %d ",res);
}
int calculator(int num1,char op,int num2)
{
	if(op=='+')
 	
 	return num1+num2;
	
	else if(op=='-')

	return num1-num2;
	 
	else if(op=='*')
	
	return num1*num2;

	else if(op=='/')
	{
	   	if(num2 !=0)
		return num1/num2;
	}
	else if(op=='%')
	{
		if(num2 !=0)
		return num1%num2;
	}
	else
	{
		return
		printf("invalid operator");
	}  	
 }
