//Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
 void checkpalindrome(int*);             //only datatype
 void main()
 {
 	int no;                           //121
 	printf("enter a number: ");
 	scanf("%d",&no);
	checkpalindrome(&no);             // only value of variable.
 	
 }
 void checkpalindrome(int* n)        // variable with datatype
 {
 	int fd,ld;
 	
	fd=*n/100;
    ld=*n%10;
	  	
 	if(fd==ld)
 	{
 	  printf("number is palindrome");
	}
 	else
 	{
 		printf("number is not palindrome");
	}
 }