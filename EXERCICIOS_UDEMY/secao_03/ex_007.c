#include <stdio.h>

int main(){
    float fahrenheit;
    float celsius;

    printf("This program will receive a value in degrees Fahrenheit, convert it to degrees Celsius and print it.\n");
    printf("Enter a value in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%f degrees Fahrenheit is equal to %f degrees Celsius.", fahrenheit, celsius);
}
