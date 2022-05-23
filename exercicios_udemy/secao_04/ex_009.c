/*Read the salary of a worker and the installment amount of a loan. If the installment is more than 20% of the salary,
print: "Loan not granted", otherwise print: "Loan granted".*/

#include <stdio.h>

int main()
{
    float salary, loan_installment, percent;

    printf("Enter the salary: R$ ");
    scanf("%f", &salary);
    printf("Enter the loan installment: R$ ");
    scanf("%f", &loan_installment);

    percent = salary * 0.20;

    if(loan_installment > percent)
    {
        printf("Loan not granted.");
    }
    else
    {
        printf("Loan granted.");
    }
}
