#include <stdio.h>

int main(){
    float number;
    float square;

    printf("This program will receive a number and print its squared number.\n");
    printf("Enter a number: ");
    scanf("%f", &number);

    square = number * number;

    printf("The square of %f is: %f", number, square);
}
