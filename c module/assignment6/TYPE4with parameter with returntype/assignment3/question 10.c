// Find Sum of first and last digit of given number. 
// Input: n = 12345  Output: 6 (1 + 5)
#include<stdio.h>
 int sumof(int,int,int,int);
 void main()
 {  int no=12345;
 	int fd;
 	int rem,sum;
    
 	int res=sumof(no,fd,rem,sum);
 	printf("sum of first and last digit  %d",res);
 }
 int sumof(int no,int fd,int rem,int sum)
 {
 	
    
	int ld=no%10;
    
	while(no>0)
    {
    	rem=no%10;
    	no=no/10;
    	
	}
	sum=rem+ld;
	return sum;
 }