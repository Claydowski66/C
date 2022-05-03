//Read a floating point number and print the fifth part.

#include <stdio.h>

int main(){
    float number, fifth_part;

    printf("Enter a number: ");
    scanf("%f", &number);

    fifth_part = number / 5;

    printf("The fifth part of %f is: %f", number, fifth_part);
}
