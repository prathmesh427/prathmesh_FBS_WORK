#include <stdio.h>
char* mystrstr(char* str, char* sub);

void main()
{
    char str[] = "hello prathmesh lakade";
    char sub[] = "prathmesh";
    
    char* result = mystrstr(str, sub);

    if (result != NULL)
        puts(result);
    else
        printf("Substring not found.\n");

}

char* mystrstr(char* str, char* sub)
{
    char* p1 = str;
    char* p2 = sub;
    char* p1_advance = NULL;

    // Empty substring matches at beginning
    if (*sub == '\0')
        return str;

    while (*p1 != '\0') {
        if (*p1 == *sub) {
            p1_advance = p1;
            p2 = sub;

            while (*p1_advance != '\0' && *p2 != '\0' && *p1_advance == *p2) {
                p1_advance++;
                p2++;
            }

            if (*p2 == '\0') {
                return p1; // Found match
            }
        }
        p1++;
    }

    return NULL; // No match found
}
