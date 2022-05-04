//Read a distance in kilometers and show it converted in miles.

#include <stdio.h>

int main(){
    float kilometers, miles;

    printf("Enter a value in km: ");
    scanf("%f", &kilometers);

    miles = kilometers / 1.609344;

    printf("A distance of %fkm is equivalent to %fmi", kilometers, miles);
}
