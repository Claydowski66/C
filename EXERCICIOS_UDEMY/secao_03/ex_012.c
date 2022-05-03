//Read a leght in miles and present it converted in kilometers.

#include <stdio.h>

int main(){
    float miles;
    float kilometers;

    printf("Enter a value in miles: ");
    scanf("%f", &miles);

    kilometers = 1.609344 * miles;

    printf("%fm in leght is equal to %fkm", miles, kilometers);
}
