#include <stdio.h>

int main(){
    float celsius;
    float fahrenheit;

    printf("This program will receive a value in degrees Celsius, convert it to degrees Celsius and print it.\n");
    printf("Enter a value in degrees Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("%f degrees Celsius is equal to %f degrees Fahrenheit", celsius, fahrenheit);
}
