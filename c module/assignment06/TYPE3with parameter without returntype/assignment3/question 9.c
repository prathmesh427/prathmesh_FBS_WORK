//Check the given number is Palindrome number or not. 
// Input: n = 121  Output: Palindrome
#include <stdio.h>
 
 void checkpalindrome(int,int,int,int);
 void main()
 {
 	int no;
 	printf("enter a number: ");
	scanf("%d",&no);
	int rev=0,rem;
 	int temp=no;
 	
	checkpalindrome(no,rev,rem,temp);
 	
 }
 void checkpalindrome(int no,int rev,int rem,int temp)
 {
 	
 	while(no>0)
 	{
 		rem=no%10;
 		rev=rev*10+rem;
 		no=no/10;
	 }
	 if (temp==rev)
	 {
	 	printf("palindrome number");
	 }
	 else
	 {
	 	printf("not palindrome number");
	 }
 }