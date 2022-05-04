//Read a angle in degrees and show it converted to radians.

#include <stdio.h>

int main(){
    float degrees, radians;

    printf("Enter a value in degrees: ");
    scanf("%f", &degrees);

    radians = degrees * 3.141592 / 180;

    printf("%f degrees angle is equivalent to %f radians.", degrees, radians);
}
