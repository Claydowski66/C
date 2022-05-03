//Read a floating point number and print it the squared number.

#include <stdio.h>

int main(){
    float number;
    float square;

    printf("Enter a number: ");
    scanf("%f", &number);

    square = number * number;

    printf("The square of %f is: %f", number, square);
}
