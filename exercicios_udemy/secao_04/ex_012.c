//Read an integer, if it is negative, print the message "Invalid number.". If it is positive, calculate the logarithm of this number.


#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    float logarithm;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number >= 0)
    {
        logarithm = log(number);
        printf("The logarithm of %d is: %f", number, logarithm);
    }
    else
    {
        printf("Invalid Number.");
    }
}
