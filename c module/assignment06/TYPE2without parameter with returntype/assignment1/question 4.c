//Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
 int checkcharacter();
 void main ()
 {
 	int res = checkcharacter();
 	if(res==1)
 	{
 	 printf("charecter is  vowel");
	}
	else
	{
     printf("charecter is consonant");
	}
 }
int  checkcharacter()
 {
 	{
 	char ch = 'a';
 	
 	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 	 return 1;
	else
	return 0;
	
 }
 }
 