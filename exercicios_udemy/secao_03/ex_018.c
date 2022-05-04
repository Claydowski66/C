//Read a volume value in cubic meters (m^3) and show it converted in liters.

#include <stdio.h>

int main(){
    float cubic_meters, liters;

    printf("Enter a cubic meters value: ");
    scanf("%f", &cubic_meters);

    liters = 1000 * cubic_meters;

    printf("%fcm^3 volume equals to %fL", cubic_meters, liters);
}
