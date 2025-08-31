//Accept the age and check if the person is: 
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
 void checkage();
 void main()
 {
 	checkage();
 }
 void checkage()
 {
 	 {
 	int age=6;
 	
 	if (age<12)
 	{
 		printf("Child ");
	}
	 else if(age<=19)
	 	
		 printf("Teenager ");
	 	
	 	else if(age<=59)
	 		
	 		printf("adult");
			
			 else if (age>=60)
			 	
			 printf("senior");
			
	  
 }
 }
