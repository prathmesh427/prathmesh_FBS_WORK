//4. Find odd and even among the numbers. 
#include<stdio.h>
void findeven(int[]);
 void main()
 {
 	
	 int arr[10];
 	findeven(arr);

}
void findeven(int arr[])

{
	
 	printf("enter 10 numbers:\n");
 	for(int i=0;i<10;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	printf("display array:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	int even=0;
	printf("even numbers:\n");
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
		printf("%d \n",arr[i]);
		}
    }
    printf("odd numbers:\n");
	for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d \n", arr[i]);
        }
   }
}