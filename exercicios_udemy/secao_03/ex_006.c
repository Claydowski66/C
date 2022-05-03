//Read a temperature in degrees Celsius and show it converted to degrees Fahrenheit.

#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Enter a value in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("%f degrees Celsius is equivalent to %f degrees Fahrenheit.", celsius, fahrenheit);
}
