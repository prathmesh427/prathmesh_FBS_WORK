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
