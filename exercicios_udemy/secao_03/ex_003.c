//Ask to user to enter three integer values and print their sum.

#include <stdio.h>

int main(){
    int first_number, second_number, third_number, sum;

    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);
    printf("Enter the third number: ");
    scanf("%d", &third_number);

    sum = first_number + second_number + third_number;

    printf("The sum of the three entered numbers: %d", sum);
}
