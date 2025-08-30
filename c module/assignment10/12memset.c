//use memset('*',str,5)
#include <stdio.h>
#include <string.h>
void main() 
{
    char str[20] = "Helloprathmesh";

    memset(str, 'A', 5);                // This replaces the first 5 bytes of the string with the character 'A'.

    printf("Modified string: %s\n", str);      // Print the modified string
}
