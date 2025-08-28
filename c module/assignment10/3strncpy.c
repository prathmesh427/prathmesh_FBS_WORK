// use strncpy(dest,src,n)
#include<stdio.h>
#include<string.h>
void main()
{
	char src[]="prathmesh";
	char dest[10];
	int n=4;            // no of characters from src to dest  to copy
	
	strncpy(dest,src,n);
	
	printf("copy src in dest:%s\n",dest);
}