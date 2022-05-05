//Read a value in real (R$) and dollar quotation, ther print the corresponding dollar amount.

#include <stdio.h>

int main(){
    float real, dollar_quotation, dollar;

    printf("Enter an amount in Real (R$): ");
    scanf("%f", &real);
    printf("Enter the Dollar quotation: ");
    scanf("%f", &dollar_quotation);

    dollar = real / dollar_quotation;

    printf("With R$ %f you can buy US$ %f.", real, dollar);
}
