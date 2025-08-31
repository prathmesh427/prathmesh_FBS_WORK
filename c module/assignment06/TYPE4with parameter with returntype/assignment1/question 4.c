//Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
 int checkcharacter(char);
 void main ()
 {  char ch = 'a';
    printf("enter a character: ");
    scanf("%c",&ch);
 	
 	int res = checkcharacter(ch);
 	if(res==1)
 	{
 	 printf("charecter is  vowel");
	}
	else
	{
     printf("charecter is consonant");
	}
 }
int  checkcharacter(char ch)
 {
 	
 	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 	 return 1;
	else
	return 0;
}
 