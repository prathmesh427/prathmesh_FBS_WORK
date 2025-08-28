// use strchr(str,ch) first occurrence
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20]="prathmesh";
	char ch ='p';
	
	char *ptr=strrchr(str,ch); // Find first occurrence of 'ch'
	
	if(ptr!=NULL)
	{
		printf("first occurrence of: %c is at position :%u",ch,ptr-str);
	}
	else
	{
        printf("Character '%c' not found in the string.\n", ch);
    }
}