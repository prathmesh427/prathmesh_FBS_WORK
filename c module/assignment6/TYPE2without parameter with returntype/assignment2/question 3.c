//Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
 int checkgreatest(); // del
 void main()
 {
 	int res = checkgreatest(); //call
    if (res==0)
 	  {
 	    printf("a is greater");
	  }
	else if (res==1)
		{
		printf("b is greater");
		}
	else
		{
		printf("c is greater");
	    } 
}
	    
     int checkgreatest() //def
   {
 	int a=100,b=20,c=30;
 	
 	if(a>b)
	 {
 		 return 0;
	 }
	
	else if (b>c)
		{
			return 1;
	
		}
	else
		 {
		 	return 2;
		 }
	     
	
   }


 
 
