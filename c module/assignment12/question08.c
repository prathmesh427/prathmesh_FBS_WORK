//8. WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
void main()
{
	char str[]="hello prathmesh lakade";
	int count=1;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')  //is a character constant representing a space (ASCII code 32).
		{
			count ++;
		}
		
	}
	printf("%d",count);
}