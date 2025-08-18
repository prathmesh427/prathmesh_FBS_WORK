//Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
 int checkgreatest(int,int,int); 
 void main()
 {  int a;
 	int b;
 	int c;
 	printf("enter the numbers:",a,b,c);
 	scanf("%d%d%d",&a,&b,&c);
 	int res = checkgreatest(a,b,c); 
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
	    
     int checkgreatest(int a,int b,int c) 
   {
 
 	
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


 
 
