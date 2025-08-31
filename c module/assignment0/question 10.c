//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage. 
#include <stdio.h>
 void main()
 {
 	int per;
 	int total;
	int math= 78;
 	int eng= 74;
 	int marathi= 79;
 	int history= 80;
 	int geography= 73;
 	
 	total= math+eng+marathi+history+geography;
 	per= total/5;
 	
 	printf("percentage of the five subjects is %d",per);
}