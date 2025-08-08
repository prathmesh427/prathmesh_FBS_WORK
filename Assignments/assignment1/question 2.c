//Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
 void main()
 {
 	int no=121;
 	int fd,ld;
 	
	 fd=no/100;
 	 ld=no%10;
	  	
 	if(fd==ld)
 	{
 	  printf(" number is palindrome");
	}
 	else
 	{
 		printf("number is not palindrome");
	}
 	
 }