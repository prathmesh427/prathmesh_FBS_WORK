//6.Accept array and print only prime numbers of array.
#include<stdio.h>
int prime(int no){
	if (no<1)
	return 0;
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		return 0;
	}
	return 1;
}

void main()
{
	int arr[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
		if(prime(arr[i]))
		printf("%d ",arr[i]);
	}
	
}