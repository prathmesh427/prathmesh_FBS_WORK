// use strdup(str)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[]="hello prathmesh";
	
	char* arr=strdup(str);  //Duplicates a string.

                            //Allocates memory on the heap.

                            //Returns a pointer to the new string.
	printf("after using strdup :%s",arr);
	    free(arr);
}