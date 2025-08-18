//Accept the age and check if the person is: 
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
 #include<stdio.h>
int checkage();
void main()
{
int res=checkage();
	if(res==1)
	{
		printf("Child");
	}
	else if(res==2)
	{
		printf("Teenager");
	}
	else if(res==3)
	{
		printf("Adult");	
	}
	else if(res==4)
	{
		printf("Senior");
	}
}

int checkage()
{
	int age;
	printf("enter a age : ");
	scanf("%d",&age);
	
	if(age<=12)
	{
		 return 1;
	}
	else
	{
		if(age<=19)
		{
			 return 2;
		}
		else
		{
			if(age<=59)
			{
				 return 3;
			}
			else
			{
				 return 4;
			}
		}
	}

}
 
