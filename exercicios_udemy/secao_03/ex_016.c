//Read a legth value in inches and show it converted to centimeters.

#include <stdio.h>

int main(){
    float inches, centimeters;

    printf("Enter a value in inches: ");
    scanf("%f", &inches);

    centimeters = inches * 2.54;

    printf("%f inches leght equals %f centimeters.", inches, centimeters);
}
