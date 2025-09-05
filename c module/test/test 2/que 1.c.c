//Que 1. WAP to calculate electricity bill.
//For 1-50 units – 30 rs/unit , For 51-150 units – 40 rs/unit, For 151and above units –50 rs/unit
#include <stdio.h>
void main()
{
 int unit,bill;
 printf("enter unit");
 scanf("%d",&unit);
 
  if (unit<50)
    {
	bill=unit*30;
    }
  else if (unit<150)
    {
     bill=unit*40;	
	}
  else if (unit>150)
    {
     bill=unit*50;
	}
  else
   {
   	printf("invalid unit");
   }
   printf("%d",bill);
}
