//2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
//these members from user and display them. Also perform addition of two time variables
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
//the given time into sec.
#include <stdio.h>
typedef struct time 
{
    int hrs;
    int min;
    int sec;
} Time;

int convert_to_seconds(Time t);
void normalize(Time* t);
void display(Time t);

void main() 
{
    Time t;

    printf("Enter hours: ");
    scanf("%d", &t.hrs);
    printf("Enter minutes: ");
    scanf("%d", &t.min);
    printf("Enter seconds: ");
    scanf("%d", &t.sec);

    normalize(&t);

    display(t);

    int total_seconds = convert_to_seconds(t);
    printf("Total seconds: %d\n", total_seconds);

}
void normalize(Time* t) 
{
    t->min += t->sec / 60;
    t->sec %= 60;
    t->hrs += t->min / 60;
    t->min %= 60;
}
void display(Time t) 
{
    printf("Time: %02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}
int convert_to_seconds(Time t) 
{
    return t.hrs * 3600 + t.min * 60 + t.sec;
}
