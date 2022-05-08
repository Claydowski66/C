/*A company hires a plumber at R$30 a day. Write a program that asks for the number of days worked by the plumber and prints the 
amount that must be paid, knowing that 8% is deducted for income tax.*/

#include <stdio.h>

int main(){
    int days;
    float total, income_tax, amount_paid;

    printf("How many worked days?: ");
    scanf("%d", &days);

    total = days * 30;
    income_tax = total * 0.08;
    amount_paid = total - income_tax;

    printf("\n\nWorked Days: %d", days);
    printf("\nTotal Amount: R$ %.2f", total);
    printf("\nIncome Tax: R$ %.2f", income_tax);
    printf("\nAmount Paid: R$ %.2f", amount_paid);
}
