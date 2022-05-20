/*Write a program that, given two integers, prints on the screen the greater, as well as the difference between the two.*/

#include <stdio.h>

int main()
{
    int number1, number2, difference;

    printf("Enter two integers (separated by space): ");
    scanf("%d %d", &number1, &number2);

    if(number1 > number2)
    {
        difference = number1 - number2;
        printf("The number %d is greater than %d and the difference is %d.", number1, number2, difference);
    }
    else if(number2 > number1)
    {
        difference = number2 - number1;
        printf("The number %d is greater than %d and the difference is %d.", number2, number1, difference);
    }
    else
    {
        printf("Both the numers are the same and have no difference between them.");
    }
}
