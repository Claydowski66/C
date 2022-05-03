//Read a temperature in degrees Fahrenheit and show it converted in degrees Celsius.

#include <stdio.h>

int main(){
    float fahrenheit, celsius;

    printf("Enter a value in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%f degrees Fahrenheit is equivalent to %f degrees Celsius.", fahrenheit, celsius);
}
