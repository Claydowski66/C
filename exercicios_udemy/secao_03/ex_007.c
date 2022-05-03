//Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.

#include <stdio.h>

int main(){
    float fahrenheit;
    float celsius;

    printf("Digite um valor em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%f graus Fahrenheit equivalem a %f graus Celsius.", fahrenheit, celsius);
}
