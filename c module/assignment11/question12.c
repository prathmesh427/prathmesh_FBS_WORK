//mystrrchr user define function
#include<stdio.h>
#include<string.h>
char* mystrrchr(char*,char);
void main()
{
	char str[]="prathmesh";
	char ch='h';

	char* res=mystrrchr(str,ch);
	printf("%u",res-str);
}
char* mystrrchr(char* str,char ch)
{
	int res=strlen(str);

	for(int i=res-1;i>=0;i--)
	{
		if(ch==str[i])
		{
			return &str[i];
			break;
		}
	}
}
