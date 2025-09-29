//9. Complex (real, imaginary)
#include <stdio.h>
struct Complex 
{
    float real;
    float imag;
};

void main()
{
    struct Complex num;

    printf("Enter real part: ");
    scanf("%f", &num.real);

    printf("Enter imaginary part: ");
    scanf("%f", &num.imag);

    if (num.imag >= 0)
        printf("The complex number is: %.2f + %.2fi\n", num.real, num.imag);
    else
        printf("The complex number is: %.2f - %.2fi\n", num.real, -num.imag);

}
