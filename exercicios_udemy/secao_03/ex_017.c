//Read a leght value in centimeters and show it converted in inches.

#include <stdio.h>

int main(){
    float centimeters, inches;

    printf("Enter a value in centimeters: ");
    scanf("%f", &centimeters);

    inches = centimeters / 2.54;

    printf("%f centimeters leght equals %f inches", centimeters, inches);
}
