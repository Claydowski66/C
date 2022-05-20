/*Write a program that takes two numbers and prints the greater. If the two numbers are equal, print the message "Equal Numbers".*/

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Enter two integers (Separated by space): ");
    scanf("%d %d", &number1, &number2);

    if(number1 > number2)
    {
        printf("The number %d is the greatest.", number1);
    }
    else if(number2 > number1)
    {
        printf("The number %d is the greatest.", number2);
    }
    else
    {
        printf("Equal Numbers.");
    }
}
