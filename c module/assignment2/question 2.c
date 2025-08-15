//Accept three sides of a triangle from the user and determine whether the triangle is 
//equilateral, isosceles, or scalene. 
#include <stdio.h>
 void main()
 {
 	int s1=10;
 	int s2=30;
 	int s3=20;
 	
	if (s1==s2 && s2==s3)
 	{
	 printf("triangle is equilateral ");
    }
	 else if(s1==s2 || s2==s3 || s1==s3)
	 	printf("triangle is isoseles");
	 	else
	 	 {
	 		printf("triangle is scalene");
	     }
}
 