// Find Sum of first and last digit of given number. 
// Input: n = 12345  Output: 6 (1 + 5)
#include<stdio.h>
 void sumof(int*,int*,int*,int*);
 void main()
 {
 	int no=12345;
 	int fd,sum;
 	int rem;
	sumof(&no,&fd,&sum,&rem);
 }
 void sumof(int* no,int* fd,int* sum,int* rem)
 {
 	int ld=(*no)%10;
    
	while((*no)>0)
    {
    	(*rem)=(*no)%10;
    	(*no)=(*no)/10;
    	
	}
	*sum=(*rem)+ld;
	printf("sum of first and last digit is %d and %d = %d",*rem,ld,*sum);
 }