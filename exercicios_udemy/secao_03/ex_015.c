//Read an angle in radians and show it converted to degrees.

#include <stdio.h>

int main(){
    float radians, degrees;

    printf("Enter a value in radians: ");
    scanf("%f", &radians);

    degrees = radians * 180 / 3.141592;

    printf("%f radians angle is equivalent to %f degrees.", radians, degrees);
}
