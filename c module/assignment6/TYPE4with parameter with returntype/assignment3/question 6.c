//Check the given number is Perfect number or not. 
// Input: n = 28  Output: Perfect 
#include<stdio.h>
int checkperfect(int,int,int);
void main()
{   int no;                               //28
	int sum=0;
	int i=1;
	printf("enter a number: ");
	scanf("%d",&no);
	
     int res=checkperfect(no,sum,i);
	 if(res==1)
	 {
	 	printf("perfect number");
	 }
	 else
	 {
	 	printf("not perfect number");
	 }
}
int checkperfect(int no,int sum,int i)
{
	
	while(i<no)
	{
		if(no%i==0)
		sum=sum+i;
		i++;
	}
	 if(no==sum)
	 {
	 return 1;
	 }
	 else
	 {
	 return 0;
	 }
}

