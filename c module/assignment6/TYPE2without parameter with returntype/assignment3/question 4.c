//Check the given number is prime or not. 
//Input: n = 7  Output: Prime 
#include<stdio.h>
 int checkprime();
 void main()
{
    int res=checkprime();
	if(res==0)
		{
			printf("prime number");
		}
		else
		{
			printf("not prime number");
		}
}
	
 int checkprime()
  {
 	int no;                            //7
 	printf("enter number:");
 	scanf("%d",&no);         
 	int i=2,status= 0;	 	 
 	
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