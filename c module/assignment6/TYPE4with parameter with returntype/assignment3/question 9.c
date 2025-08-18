//Check the given number is Palindrome number or not. 
// Input: n = 121  Output: Palindrome
#include <stdio.h>
 
 int checkpalindrome(int,int,int,int);
 void main()
 {  int no;                   //121
 	printf("enter a number: ");
 	scanf("%d",&no);
	int rev=0,rem;
 	int temp=no;
 	
 	int res=checkpalindrome(no,rev,rem,temp);
 	if (res==1)
	 {
	 	printf("palindrome number");
	 }
	 else
	 {
	 	printf("not palindrome number");
	 }
 	
 }
 int checkpalindrome(int no,int rev,int rem,int temp)
 {
 	while(no>0)
 	{
 		rem=no%10;
 		rev=rev*10+rem;
 		no=no/10;
	 }
	 if (temp==rev)
	 {
	  return 1;
	 }
	 else
	 {
	 return 0;
	 }
 }