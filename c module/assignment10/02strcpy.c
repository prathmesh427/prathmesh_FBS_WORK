//use strcpy(dest,src)
#include<stdio.h>
#include<string.h>
void main()
{
	char src[]="prathmesh";
	char dest[10];
	
    printf("before copy src:%s\ndest:%s\n",src,dest);
     
    strcpy(dest,src);  //copy src to dest
     
    printf("after copy src:%s\ndest:%s\n",src,dest);
}