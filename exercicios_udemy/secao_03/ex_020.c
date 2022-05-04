//Read a mass value in kilograms and show it converted to pounds.

#include <stdio.h>

int main(){
    float kilograms, pounds;

    printf("Enter a kilograms value: ");
    scanf("%f", &kilograms);

    pounds = kilograms / 0.45359237;

    printf("A mass of %fkg equals to %flb.", kilograms, pounds);
}
