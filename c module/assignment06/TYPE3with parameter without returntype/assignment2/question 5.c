//Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
//is a student and he has purchased more than 500 than discount is 20% otherwise 
//discount is 10%.But if he is not a student then if he has purchased more than 600 
//discount is 15% otherwise there is not discount.
#include <stdio.h>
 void checkdiscount(int,char);
 void main()
 {
 	int price;
	char ch;
	printf("enter a price: ");
	scanf("%d",&price);
	printf("are you student (y,n): ");
	scanf(" %c",&ch);
	checkdiscount(price,ch);
	
 }
 void checkdiscount(int price,char ch)
 {
 	
 	double tprice,isstudent;
 	
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
 