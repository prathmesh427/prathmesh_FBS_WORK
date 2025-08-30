// use strxfrm(dest,src,n)
#include <stdio.h>
#include <string.h>

void  main() 
{
    char src[] = "prathmesh";
    char dest[30];
    int n=5;
    
    strxfrm(dest,src,n); // compares strings in a  alphabetical asscii value

    printf("Original: %s\n",src);
    printf("Transformed: %s\n",dest);


}
