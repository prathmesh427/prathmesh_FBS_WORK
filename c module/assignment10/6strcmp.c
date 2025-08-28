// use strcmp(s1,s2)
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20]="prathmesh";
	char s2[20]="prathmesh";
	
	int res=strcmp(s1,s2);

    if (res==0)
    {
	
        printf("The strings are equal\n");
	} 
	else if (res < 0) 
	{
      printf("s1 is less than s2\n");
    } 
	else 
	{
        printf("s1 is greater than s2\n");
    }
}