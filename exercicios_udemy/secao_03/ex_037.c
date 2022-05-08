//Write a program that reads the value of a product and prints the discounted value, given that discount was 12%.

#include <stdio.h>

int main(){
    float product_value, discount, product_discount;

    printf("Enter the product value: ");
    scanf("%f", &product_value);

    discount = product_value * 12 / 100;
    product_discount = product_value - discount;

    printf("\nProduct Value: $ %.2f", product_value);
    printf("\nDiscount Value: $ %.2f", discount);
    printf("\nFinal Value: $ %.2f", product_discount);
}
