// use strncat(dest,src,n)
#include<stdio.h>
#include<string.h>
void main()
{
	char dest[30]="prathmesh";
	char src[20]="lakade";
	int n=5;
	
	strncat(dest,src,n);   
	
	printf("append src characters in dest:%s\n",dest);   //append first 5 characters of src to dest
}