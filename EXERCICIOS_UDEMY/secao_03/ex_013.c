//Read a leght in kilometers and present it converted in miles.

#include <stdio.h>

int main(){
    float kilometers;
    float meters;

    printf("Enter a value in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers / 1.609344;

    printf("%fkm in leght is equal to %fm", kilometers, meters);
}
