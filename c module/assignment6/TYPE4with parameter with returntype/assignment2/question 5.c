//Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
//is a student and he has purchased more than 500 than discount is 20% otherwise 
//discount is 10%.But if he is not a student then if he has purchased more than 600 
//discount is 15% otherwise there is not discount.

 
 #include<stdio.h>
int checkdiscount(int,char,int,int);
void main()
{int price;
	char ch,discount,finalp;
	printf("enter a price: ");
	scanf("%d",&price);
	printf("are you student (y,n): ");
	scanf(" %c",&ch);
	
	int finalprice=checkdiscount(price,ch,discount,finalp);
	printf("%d",finalprice);
}

int checkdiscount(int price,char ch,int discount,int finalp)
{ 
	if(ch=='y'){
		if(price>500){
			discount=(price*20)/100;
		}
		else{
			discount=(price*10)/100;
		}
	}
	else
	if(ch=='n'){
		if(price>600){
			discount=(price*15)/100;
		}
		else
		printf("other wise no discount");
	}
	
    finalp= price-discount;
    printf("discount %d :",discount);
    return finalp;
}