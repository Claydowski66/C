//Read a mass value in pounds and show it converted to kilograms.

#include <stdio.h>

int main(){
    float pounds, kilograms;

    printf("Enter a value in pounds: ");
    scanf("%f", &pounds);

    kilograms = pounds * 0.45359237;

    printf("A mass of %flb equals to %fkg.", pounds, kilograms);
}
