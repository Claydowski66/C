//Write a program that reads three values and outputs the sum of the square of the three values as a result.

#include <stdio.h>

int main(){
    float first_number, second_number, third_number, first_number_square, second_number_square, third_number_square, sum;

    printf("Enter the first value: ");
    scanf("%f", &first_number);
    printf("Enter the second value: ");
    scanf("%f", &second_number);
    printf("Enter the third value: ");
    scanf("%f", &third_number);

    first_number_square = first_number * first_number;
    second_number_square = second_number * second_number;
    third_number_square = third_number * third_number;
    sum = first_number_square + second_number_square + third_number_square;

    printf("\nFirst number: %f\nSquare: %f\n\n", first_number, first_number_square);
    printf("Second number: %f\nSquare: %f\n\n", second_number, second_number_square);
    printf("Third number: %f\nSquare: %f\n\n", third_number, third_number_square);
    printf("Sum of squared results: %f", sum);
}
