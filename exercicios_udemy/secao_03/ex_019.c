//Read a volume value in liters and show it converted in cubic meters.

#include <stdio.h>

int main(){
    float liters, cubic_meters;

    printf("Enter a liters value: ");
    scanf("%f", &liters);

    cubic_meters = liters / 1000;

    printf("%fL volume equals to %fm^3.", liters, cubic_meters);
}
