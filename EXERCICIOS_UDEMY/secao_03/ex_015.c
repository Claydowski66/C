#include <stdio.h>

int main(){
    float radians;
    float degrees;

    printf("Enter a value in radians: ");
    scanf("%f", &radians);

    degrees = radians * 180 / 3.141592;

    printf("The angle of %f radians is equal to %f degrees.", radians, degrees);
}
