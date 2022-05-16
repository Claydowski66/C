//Read a 4-digit integer (from 1000 to 9999) and print 1 digit per line.

#include <stdio.h>

int main(){
    int number, first_digit, second_digit, third_digit, fourth_digit;

    printf("Enter a 4-digit integer: ");
    scanf("%d", &number);

    first_digit = number / 1000 % 10;
    second_digit = number / 100 % 10;
    third_digit = number / 10 % 10;
    fourth_digit = number / 1 % 10;

    printf("\nFirst Digit: %d", first_digit);
    printf("\nSecond Digit: %d", second_digit);
    printf("\nThird Digit: %d", third_digit);
    printf("\nFourth Digit: %d", fourth_digit);
}
