//2. Write a user define function to reverse string
#include <stdio.h>
#include <string.h>
void reverseString(char str[]); 
void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    reverseString(str);

    printf("Reversed string: %s", str);

}
void reverseString(char str[]) 
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


