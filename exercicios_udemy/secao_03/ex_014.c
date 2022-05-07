//Read an angle in degrees and show it converted to radians.

#include <stdio.h>

int main(){
    float degrees, radians;

    printf("Enter a value in degrees: ");
    scanf("%f", &degrees);

    radians = degrees * 3.14159265358979323846 / 180;

    printf("%f degrees angle is equivalent to %f radians.", degrees, radians);
}
