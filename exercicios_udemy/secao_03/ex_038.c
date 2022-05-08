//Read an employee's salary. Calculate and prints the amount of the new salary, knowing that it will receive an 25% increase.

#include <stdio.h>

int main(){
    float salary, increase, new_salary;

    printf("Enter the salary amount: $ ");
    scanf("%f", &salary);

    increase = salary * 25 / 100;
    new_salary = salary + increase;

    printf("\nOld salary: $ %.2f", salary);
    printf("\nIncrease: $ %.2f", increase);
    printf("\nNew salary: $ %.2f", new_salary);
}
