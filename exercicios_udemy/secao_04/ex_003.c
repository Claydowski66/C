/*Read an floating point number. If it is a positive number, print its square root. Otherwise, print the number squared.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float number;

    printf("Enter an floating point number: ");
    scanf("%f", &number);

    if (number >= 0)
    {
        float square_root = sqrt(number);
        printf("The square root of %.2f is: %.2f", number, square_root);
    }
    else
    {
        float number_squared = pow(number, 2);
        printf("The number %.2f squared is: %.2f", number, number_squared);
    }
}
