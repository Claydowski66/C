#include <stdio.h>

int main(){
    float number;
    float fifth_part;

    printf("This program will receive a number and print its fifth part.\n");
    printf("Enter a number: ");
    scanf("%f", &number);

    fifth_part = number / 5;

    printf("The fifth part of %f is: %f", number, fifth_part);
}
