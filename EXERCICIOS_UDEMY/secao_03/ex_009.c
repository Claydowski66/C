#include <stdio.h>

int main(){
    float celsius;
    float kelvin;

    printf("This program will receive a value in degrees Celsius, convert it to degrees Kelvin and print it.\n");
    printf("Enter a value in degrees Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%f degrees Celsius is equal to %f degrees Kelvin.", celsius, kelvin);
}
