//Accept three sides of a triangle from the user and determine whether the triangle is 
//equilateral, isosceles, or scalene. 
#include <stdio.h>
 int gettype();
 void main()
 {
  int res =	gettype();
  if(res==1)
  {
	 printf("triangle is equilateral ");
    }
	 else if (res==0)
	 	{
		 printf("triangle is isoseles");
	    }
	 	else
	 	 {
	 		printf("triangle is scalene");
	     }
  
  
 }
 int gettype()
 {
 	{
 	int s1=10;
 	int s2=10;
 	int s3=20;
 	
	if (s1==s2 && s2==s3)
	 return 1;
	else if(s1==s2 || s2==s3 || s1==s3)
     return 0;	 
 	
    }
 
 }
 