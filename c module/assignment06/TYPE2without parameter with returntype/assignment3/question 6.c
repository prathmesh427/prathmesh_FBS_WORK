//Check the given number is Perfect number or not. 
// Input: n = 28  Output: Perfect 
#include<stdio.h>
int checkperfect();
void main()
{
 int res=checkperfect();
	 if(res==1)
	 {
	 	printf("perfect number");
	 }
	 else
	 {
	 	printf("not perfect number");
	 }
}
int checkperfect()
{
	int no;                               //28
	int sum=0;
	int i=1;
	printf("enter a number: ");
	scanf("%d",&no);
	
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

