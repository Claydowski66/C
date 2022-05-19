/*Write a program that reads a number and, if it is positive, calculates and prints it:
    > The entered number squared.
    > The square root of the entered number.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number >= 0)
    {
        float square_root = sqrt(number);
        float number_squared = pow(number, 2);

        printf("The square root of %.2f is: %.2f\n", number, square_root);
        printf("The number %.2f squared is: %.2f", number, number_squared);
    }
    else
    {
        printf("Negative numbers are not valid.");
    }
}
