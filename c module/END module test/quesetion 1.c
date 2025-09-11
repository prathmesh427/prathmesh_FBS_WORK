// write a programm to print sum or prime numbers in given range
#include<stdio.h>

int checkprime(int); 
void main() 
{
    int start, end, sum = 0;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) 
    {
        if (checkprime(i)) 
        {
            sum += i;
        }
    }

    printf("Sum of prime numbers between %d and %d is: %d\n", start, end, sum);
}

int checkprime(int num) 
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
