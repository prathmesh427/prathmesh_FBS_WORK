//Write a program to check whether a given character is uppercase or lowercase. 
#include <stdio.h>
 int checkcharater();
 
 void main()
 {
  int res = checkcharater();
 	if(res==1)
 	{
 		printf("character is uppercase");
 	}
 	else
 	{
 	    printf("character is lowercase");
	}
 	
 }
 int checkcharater()
 {
 	{
 	char ch = 'a';
 	
 	if(ch>='A'&& ch<='Z')
 	 return 1;
 	else 
 	 return 0;
 }
 }
 