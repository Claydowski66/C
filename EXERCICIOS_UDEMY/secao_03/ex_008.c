#include <stdio.h>

int main(){
    float kelvin;
    float celsius;

    printf("This program will receive a value in degrees Kelvin, convert it to degrees Celsius and print it.\n");
    printf("Enter a value in degrees Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("%f degrees Kelvin is equal to %f degrees Celsius.", kelvin, celsius);
}
