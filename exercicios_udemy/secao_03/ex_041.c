/*Write a program that reads hourly rate (in R$) and number of worked hours in a month. Print the amount which must to be paid
to employee, adding 10% increased to calculated amount.*/

#include <stdio.h>

int main(){
    int worked_hours;
    float hourly_rate, calculation_basis, increase, amount_paid;

    printf("Enter the hourly rate: R$ ");
    scanf("%f", &hourly_rate);
    printf("Enter how many worked hours: ");
    scanf("%d", &worked_hours);

    calculation_basis = hourly_rate * worked_hours;
    increase = calculation_basis * 0.10;
    amount_paid = calculation_basis + increase;

    printf("\nBase Value: R$ %.2f", calculation_basis);
    printf("\nIncreased Value: R$ %.2f", increase);
    printf("\nAmount Paid: R$ %.2f", amount_paid);
}
