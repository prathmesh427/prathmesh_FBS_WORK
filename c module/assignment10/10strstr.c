//use strstr(str,sub)
#include <stdio.h>
#include <string.h>

void main() 
{
    char str[50] = "prathmesh lakade";
    char sub[50] = "lakade";

    char *ptr = strstr(str, sub);  // Find substring

    if (ptr != NULL)
	{
        printf("Substring '%s' found at position: %ld\n", sub, ptr - str);
    } 
	else 
	{
        printf("Substring '%s' not found in the string.\n", sub);
    }

}
