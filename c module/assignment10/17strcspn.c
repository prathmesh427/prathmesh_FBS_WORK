//use strcspn(s1,s2)
#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[] = "prathmeshlakde";
    char s2[] = "m";

    int res= strcspn(s1,s2);  // used to find the position of the first character in a string that matches any character from another string.

    printf(" position of the first character from  s2  that are  s1 : %d\n",res);
    

}
