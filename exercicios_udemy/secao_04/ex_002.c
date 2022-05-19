/*Write a program that reads a user-supplied number. If it is a positive number,
calculate the squared root of the number. If the number is negative,
print a messege saying that it is an invalid number.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    if(number >= 0)
    {
        float square_root = sqrt(number);
        printf("The square root of %.2f is: %.2f", number, square_root);
    }
    else
    {
        printf("This is an invalid number.");
    }
}
