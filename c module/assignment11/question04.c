//mystrcat user define function
#include<stdio.h>
#include<string.h>
void mystrcat(char*,char*);
void main()
{
	char str[50]="prathmesh";
	char brr[50]="lakade";
	mystrcat(str,brr);
}
void mystrcat(char* str,char* brr)
{
int n=strlen(str);
	for(int j=n,i=0;brr[i]!='\0';i++,j++)
	{
		str[j]=brr[i];
	}
	puts(str);
}
