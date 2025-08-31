// use strncmp(s1,s2,n)
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20]="prathmesh";
	char s2[20]="lakde";
	int n=5;
	
	int res=strncmp(s1,s2,n);

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