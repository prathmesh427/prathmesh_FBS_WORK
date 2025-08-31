// use strspn(s1,s2)
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]= "prathmesh";
    char s2[] = "prathemshlakde";

    int res = strspn(s1,s2);  // used to count how many characters at the string s1 belong to string s2

    printf("Initial characters from  s1  that are in  s2: %d\n",res);
    
}

