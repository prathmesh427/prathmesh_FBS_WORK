//write a programm to accept string from user and replace one character from special symbol.
#include<stdio.h>
void main()
{
	char str[20];
    char oldchar, newchar;

    printf("Enter the string:");
    scanf("%s", str); 
    
	printf("Enter the character to replace:");
    scanf(" %c",&oldchar);  
    
	printf("Enter the special symbol:");
    scanf(" %c",&newchar);  

    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == oldchar) 
		{
          str[i] = newchar;
        }
    }
    printf("Modified string: %s",str);
}