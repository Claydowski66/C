//Write a program that reads an integer and check if the number are even or odd.

#include <stdio.h>

int main()
{
    int number, check;

    printf("Enter an integer: ");
    scanf("%d", &number);

    check = number % 2;

    if(check == 0)
    {
        printf("The number %d is even.", number);
    }
    else
    {
        printf("The number %d is odd.", number);
    }
}
