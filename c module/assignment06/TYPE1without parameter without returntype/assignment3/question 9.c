//Check the given number is Palindrome number or not. 
// Input: n = 121  Output: Palindrome
#include <stdio.h>
 
 void checkpalindrome();
 void main()
 {
 	checkpalindrome();
 	
 }
 void checkpalindrome()
 {
 	int no=121;
	int rev=0,rem;
 	int temp=no;
 	
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