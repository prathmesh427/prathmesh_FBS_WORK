//Check the given number is prime or not. 
//Input: n = 7  Output: Prime 
#include<stdio.h>
 int checkprime(int,int ,int);
 void main()
{   int no;                            //7
 	printf("enter number:");
 	scanf("%d",&no);         
 	int i=2,status= 0;	 	 
 	
    int res=checkprime(no,i,status);
	if(res==0)
		{
			printf("prime number");
		}
		else
		{
			printf("not prime number");
		}
}
	
 int checkprime(int no,int i,int status)
  {
 	
 	while(i<=no/2)
 	{
 		if(no%i==0)
 		{
 			status=1;
 			break;
 		}
 		i++;
	}
 		if(status==0)
		{
		 return 0;
		}
		else
		{
		 return 1;
		}
	 
  } 