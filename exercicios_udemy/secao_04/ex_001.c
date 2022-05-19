//Write a program that reads two values and prints which one is greater.

#include <stdio.h>

int main()
{
    int value1, value2;

    printf("Enter 2 values separated by space: ");
    scanf("%d %d", &value1, &value2);

    if(value1 > value2)
    {
        printf("The value %d is greater than %d.", value1, value2);
    }
    else if(value2 > value1)
    {
        printf("The value %d is greater than %d.", value2, value1);
    }
    else if (value1 == value2)
    {
        printf("Both values are the same.");
    }
    else
    {
        printf("invalid input");
    }
}
