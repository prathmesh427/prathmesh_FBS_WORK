//Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
//is a student and he has purchased more than 500 than discount is 20% otherwise 
//discount is 10%.But if he is not a student then if he has purchased more than 600 
//discount is 15% otherwise there is not discount.
#include <stdio.h>
 void main()
 {
 	double tprice;
 	double price=7000;
 	char isstudent= 'y';
 	
 	if (isstudent == 'y')
 	{
 		if (price>500)
 		tprice=price-price*0.20;
 		else
 		tprice=price-price*0.10;
 		
	}
	else
	{
		if (price>600)
		tprice=price-price*0.15;
		else
		tprice= price;
		
	}
	printf("the final price for customer is %lf",tprice);
 }