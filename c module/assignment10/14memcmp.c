//use memcmp(s1,s2,n)
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[]="prathmesh";
	char s2[]="pratl";
	int n=5;
	
	int res=memcmp(s1,s2,n);
	
    if (res==0)
    {
    	printf(" %d charecters are equal",n);
	}
	else
	{
		printf("%d charecters are not equal",n);
	}
}