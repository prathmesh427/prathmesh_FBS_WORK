//Write a program to check whether a given character is uppercase or lowercase. 
#include <stdio.h>
 int checkcharater(char);
 
 void main()
 {char ch = 'a';
    printf("enter a character: ");
    scanf("%c",&ch);
  int res = checkcharater(ch);
 	if(res==1)
 	{
 		printf("character is uppercase");
 	}
 	else
 	{
 	    printf("character is lowercase");
	}
 	
 }
 int checkcharater(char ch)
 {
 	
 	if(ch>='A'&& ch<='Z')
 	 return 1;
 	else 
 	 return 0;
 
 }
 