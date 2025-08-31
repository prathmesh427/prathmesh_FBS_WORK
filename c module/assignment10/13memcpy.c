//use memcpy(dest,src,n)
#include<stdio.h>
#include<string.h>
void main()
{
	char src[]="hello prathmesh";
	char dest[20];
	int n=7;
	
    memcpy(dest,src,n);   //copy n bytes from src to dest
	
	printf(" %s\n",dest);
	
	
}