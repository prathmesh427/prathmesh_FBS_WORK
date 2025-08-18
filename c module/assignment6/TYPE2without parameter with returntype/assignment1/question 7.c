//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%  respectively.
#include <stdio.h>
 float getsalary();
 void main()
 {
 float sal  =	getsalary();
   printf("total salary= %f",sal);
 	
 }
 float getsalary()
 {
 	{
 	double bs= 3000;
 	double da,ta,hra,ts;
 	
 	if(bs<5000)
 	{
 		da=bs*0.10;
 		ta=bs*0.15;
 		hra= bs*0.20;
 	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra= bs*0.30;
	}
	
	return  ts= bs+da+ta+hra;
	
	
 }
 }
 
 