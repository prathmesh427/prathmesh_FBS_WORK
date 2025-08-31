//Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
 void checkcharacter(char*);                // only datatype 
 void main ()
 {
 	char ch;                              //
 	printf("enter a charater: ");
 	scanf("%c",&ch);
	 checkcharacter(&ch);                 // only value of variable 
 }
void  checkcharacter(char* ch)           // variable with datatype
 {
 	
	 
	 if(*ch=='a' || *ch=='e' || *ch=='i' || *ch=='o' || *ch=='u' || *ch=='A' || *ch=='E' || *ch=='I' || *ch=='O' || *ch=='U')
 	{
 	 printf("charecter is  vowel");
	}
	else
	{
     printf("charecter is consonant");
	}
 
 }
 