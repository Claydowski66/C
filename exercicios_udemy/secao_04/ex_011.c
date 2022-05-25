/*Write a program that reads a number greater than zero and print on the screen, the sum of all digits. Exemple: 251 corresponds to 8 (2 + 5 + 1).
If the entered number is not greater then zero, terminate the program with the message "Invalid Number".*/

#include <stdio.h>

int main()
{
    int number, first_digit, second_digit, third_digit, fourth_digit, sum;

    printf("Enter an integer (1 to 9999): ");
    scanf("%d", &number);

    first_digit = number / 1 % 10;
    second_digit = number / 10 % 10;
    third_digit = number / 100 % 10;
    fourth_digit = number / 1000 % 10;

    if(number > 0 && number <= 9)
    {
        sum = first_digit;
        printf("The sum is: %d", sum);
    }
    else if(number >= 10 && number <= 99)
    {
        sum = first_digit + second_digit;
        printf("The sum is: %d", sum);
    }
    else if(number >= 100 && number <= 999)
    {
        sum = first_digit + second_digit + third_digit;
        printf("The sum is: %d", sum);
    }
    else if(number >= 1000 && number <= 9999)
    {
        sum = first_digit + second_digit + third_digit + fourth_digit;
        printf("The sum is: %d", sum);
    }
    else
    {
        printf("Invalid Number.");
    }
}
