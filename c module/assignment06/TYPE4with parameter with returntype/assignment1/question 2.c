//Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
 int checkpalindrome(int,int,int);
 void main()
 { 
    int no;
    printf("enter a number: ");
    scanf("%d",&no);
    int fd,ld;
 	
    int res =	checkpalindrome(no,fd,ld);
   if(res==1)
 	{
 	  printf(" number is palindrome");
	}
 	else
 	{
 		printf("number is not palindrome");
	}
 	
 }
 int checkpalindrome(int no,int fd,int ld)
 {
	 fd=no/100;
 	 ld=no%10;
	  	
 	if(fd==ld)
     return 1;
 	else
     return 0;
 }