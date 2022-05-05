//Read four grades, calculate the arithmetic mean and print it the result.

#include <stdio.h>

int main(){
    float first_grade, second_grade, third_grade, fourth_grade, arithmetic_mean;

    printf("Enter the first grade: ");
    scanf("%f", &first_grade);
    printf("Enter the second grade: ");
    scanf("%f", &second_grade);
    printf("Enter the third grade: ");
    scanf("%f", &third_grade);
    printf("Enter the fourth grade: ");
    scanf("%f", &fourth_grade);

    arithmetic_mean = (first_grade + second_grade + third_grade + fourth_grade) / 4;

    printf("The arithmetic mean of the three numbers entered is: %f", arithmetic_mean);
}
