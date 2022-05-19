/*Write a program that reads a user-supplied number. If it is a positive number,
calculate the squared root of the number. If the number is negative,
print a messege saying that it is an invalid number.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number >= 0)
    {
        float square_root = sqrt(number);
        printf("The square root of %d is: %.2f", number, square_root);
    }
    else
    {
        printf("This is an invalid number.");
    }
}
