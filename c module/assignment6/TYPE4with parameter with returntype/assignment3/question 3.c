//Sum of numbers in given range. 
//Find sum of numbers from start to end. 
//nput: start = 1, end = 5  Output: 15
#include<stdio.h>
 int sumofrange(int,int);
 void main()
 {  int no=1;
 	int sum=0;
 	
  int res=sumofrange(no,sum);
     printf(" sum of range : %d",res);
 }
 int sumofrange(int no,int sum)
 {
 	
	 while(no<=5)
 	{
 	  sum=sum+no;
 	  no++;
	}
    return sum;
 }
 
 