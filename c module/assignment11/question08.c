#include <stdio.h>
#include <string.h>
void mystrrev(char*);
void main()
{
    char str[] = "prathmesh";
    mystrrev(str);
    puts(str);
}
void mystrrev(char* str)
{
    int res=strlen(str);
    int i,j;
    char temp;
    
    for(i=0,j=res-1;i<j;i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
