// use strcat(dest,src) 
#include<stdio.h>
#include<string.h>
void main()
{
	char dest[30]="prathmesh";
	char src[20]="lakade";
	
	
	strcat(dest,src);          //appends src to the end of dest.
	
	printf("append string: %s\n",dest);      //o\p prathmesh lakade.
}