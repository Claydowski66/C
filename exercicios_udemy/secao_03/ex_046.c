/*Write a program that reads a 3-digit positive integer (from 100 to 999).
Generate another number created by inverted digits of the read number.
Exemple:
Read Number = 123
Generated Number = 321*/

#include <stdio.h>

int main(){
    int number, inverted, first_digit, second_digit, third_digit;

    printf("Enter a 3-digit integer: ");
    scanf("%d", &number);

    first_digit = number / 100 % 10;
    second_digit = number / 10 % 10;
    third_digit = number / 1 % 10;
    inverted = (third_digit * 100) + (second_digit * 10) + (first_digit);

    printf("\nThe entered number was: %d", number);
    printf("\nThe inverse number is: %d", inverted);
}
