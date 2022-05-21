/*Write a program that reads 2 grades from a student, checks if they are valid grades and print their arithmetic mean on the screen.
An valid grade must be a value between 0.0 and 10.0, where if a grade don't have a valid value,
this fact must be informed to the user and the program is termined.*/

#include <stdio.h>

int main()
{
    float first_grade, second_grade;

    printf("Enter the two grades (Separated by space): ");
    scanf("%f %f", &first_grade, &second_grade);

    if(first_grade >= 0 && first_grade <= 10 && second_grade >= 0 && second_grade <= 10)
    {
        float arithmetic_mean = (first_grade + second_grade) / 2;
        printf("The arithmetic mean is: %.2f", arithmetic_mean);
    }
    else
    {
        printf("Has an invalid value on the grades.");
    }
}
