//Write a program to check whether a person is eligible to vote (age = 18).
#include <stdio.h>
 int checkeligible();
 void main ()
 {
  int res=checkeligible();
 	if (res==1)
	 {
 		printf("eligible to vote");
	}
	else
	{
		printf("not eligible to vote");
	}
 	
 }
 int checkeligible()
 {
 	{
 	int age=17;
 	
 	if(age>=18)
 	 return 1;
 	 else
 	 return 0;
 	
   }
 }
 