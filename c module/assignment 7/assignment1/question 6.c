//Write a program to check whether a given character is uppercase or lowercase. 
#include <stdio.h>
 void checkcharater(char*);
 
 void main()
 {
 	char ch;
	printf("enter a character: ");
 	scanf("%c",&ch);
	 checkcharater(&ch);
 	
 }
 void checkcharater(char* ch)
 {
 	if(*ch>='A'&& *ch<='Z')
 	{
 		printf("character is uppercase");
 	}
 	else
 	{
 	    printf("character is lowercase");
	}
 }
 
 