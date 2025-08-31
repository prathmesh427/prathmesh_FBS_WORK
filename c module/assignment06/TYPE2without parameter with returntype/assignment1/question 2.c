//Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
 int checkpalindrome();
 void main()
 { int res;
  res =	checkpalindrome();
   if(res==1)
 	{
 	  printf(" number is palindrome");
	}
 	else
 	{
 		printf("number is not palindrome");
	}
 	
 }
 int checkpalindrome()
 {
 	int no=121;
 	int fd,ld;
 	
	 fd=no/100;
 	 ld=no%10;
	  	
 	if(fd==ld)
     return 1;
 	else
     return 0;
 }