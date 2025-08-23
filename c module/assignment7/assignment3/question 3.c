//Sum of numbers in given range. 
//Find sum of numbers from start to end. 
//nput: start = 1, end = 5  Output: 15
#include<stdio.h>
 void sumofrange(int*,int*);
 void main()
 {
 	
 	int no=1;
 	int sum=0;
	 sumofrange(&no,&sum);
 }
 void sumofrange(int*no,int*sum)
 {
 	 while(*no<=5)
 	{
 	  *sum=*sum + *no;
 	  (*no)++;
	}
	printf("total of 1 to 5 %d",*sum);
 }
 
 