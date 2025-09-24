//1. Write a program to prompt user to enter userid and password. After verifying userid and
//password display a 4 digit random number and ask user to enter the same. If user enters the  same number then show him success message otherwise failed
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() 
{
    char userId[20], password[20];
    char validUserId[] = "prathmesh";
    char validPassword[] = "12345";
    int generatedCode, enteredCode;
	
	printf("Enter User ID: ");
    scanf("%s", userId);

    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(userId, validUserId) == 0 && strcmp(password, validPassword) == 0) 
	{
        srand(time(0));
        generatedCode = 1000 + rand() % 9000;

        printf("\nVerification Code: %d\n", generatedCode);

        printf("Please enter the number shown above: ");
        scanf("%d", &enteredCode);

        if (enteredCode == generatedCode) 
		{
            printf("\n? Login Successful!\n");
        } else 
		{
            printf("\n? Verification Failed. Incorrect number entered.\n");
        }
    } else
	{
        printf("\n? Invalid User ID or Password.\n");
    }

}
