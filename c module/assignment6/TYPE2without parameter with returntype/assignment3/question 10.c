// Find Sum of first and last digit of given number. 
// Input: n = 12345  Output: 6 (1 + 5)
#include<stdio.h>
 int sumof();
 void main()
 {
 	int res=sumof();
 	printf("sum of first and last digit  %d",res);
 }
 int sumof()
 {
 	int no=12345;
 	int fd;
 	int rem,sum;
    
	int ld=no%10;
    
	while(no>0)
    {
    	rem=no%10;
    	no=no/10;
    	
	}
	sum=rem+ld;
	return sum;
 }