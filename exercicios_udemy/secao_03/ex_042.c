/*Read an employee's salary base. Calculate and print the salary receivable, knowing that the employee will have a bonus of 5% on the
base salary. In addition, he pays 7% of the base salary in tax.*/

#include <stdio.h>

int main(){
    float salary_base, bonus, tax, amount_paid;

    printf("Enter the salary base: R$ ");
    scanf("%f", &salary_base);

    bonus = salary_base * 0.05;
    tax = salary_base * 0.07;
    amount_paid = salary_base + bonus - tax;

    printf("\nSalary Base: R$ %.2f", salary_base);
    printf("\nBonus: R$ %.2f", bonus);
    printf("\nTax: R$ %.2f", tax);
    printf("\nReceivable Amount: R$ %.2f", amount_paid);
}
