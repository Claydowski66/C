//Read a temperature in degrees Celsius and show it converted to degrees Kelvin.

#include <stdio.h>

int main(){
    float celsius;
    float kelvin;

    printf("Enter a value in Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%f degrees Celsius is equivalent to %f degrees Kelvin.", celsius, kelvin);
}
