/*Write a program that helps sellers. From a read amount, show:
    > Amount payable with 10% off.
    > The value of each installment, in 3 interest free installments.
    > The seller's commission, if the sale is cash (5% of the discounted amount).
    > The seller's commission, if the sale is in installments (5% of the total amount).
*/

#include <stdio.h>

int main(){
    float entered_value, discount, discounted_amount, installment_value, commission_in_cash, commission_installments;

    printf("Enter the product value: R$ ");
    scanf("%f", &entered_value);

    discount = entered_value * 0.10;
    discounted_amount = entered_value - discount;
    installment_value = entered_value / 3;
    commission_in_cash = discounted_amount * 0.05;
    commission_installments = entered_value * 0.05;

    printf("\nTotal amount with 10 percent off: R$ %.2f", discounted_amount);
    printf("\nInstallment Values: 3x R$ %.2f", installment_value);
    printf("\nSeller's commission (in cash): R$ %.2f", commission_in_cash);
    printf("\nSeller's commission (installments): R$ %.2f", commission_installments);
}
