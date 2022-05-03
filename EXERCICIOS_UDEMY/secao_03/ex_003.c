#include <stdio.h>

int main(){
    int first_number;
    int second_number;
    int third_number;
    int sum;

    printf("This program will receive three integers numbers and calculate their sum.\n");
    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);
    printf("Enter the third number: ");
    scanf("%d", &third_number);

    sum = first_number + second_number + third_number;

    printf("The sum of the three number entered is: %d", sum);
}
