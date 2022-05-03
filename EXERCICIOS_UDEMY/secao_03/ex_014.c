#include <stdio.h>

int main(){
    float degrees;
    float radians;

    printf("Enter a value in degrees: ");
    scanf("%f", &degrees);

    radians = degrees * 3.141592 / 180;

    printf("The angle of %f degrees is equal to %f radians.", degrees, radians);
}
