//use strcoll(s1,s2)
#include <stdio.h>
#include <string.h>

void  main()
 {
    char s1[] = "apple";
    char s2[] = "banana";

    int result = strcoll(s1, s2);  //To compare strings in a  alphabetical order.

    if (result < 0)
	{
        printf("%s comes before %s", s1, s2);
    } 
	else if (result > 0)
	{
        printf("%s comes after %s", s1, s2);
    } 
	else 
	{
        printf("%s is equal to %s", s1, s2);
    }
}