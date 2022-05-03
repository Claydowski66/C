//Read a temperature in degrees Kelvin and show it converted in degrees Celsius.

#include <stdio.h>

int main(){
    float kelvin, celsius;

    printf("Enter a value in Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("%f degrees Kelvin is equivalent to %f degrees Celsius.", kelvin, celsius);
}
