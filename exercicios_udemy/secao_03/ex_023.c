//Read a leght value in meters and show it converted to yards.

#include <stdio.h>

int main(){
    float meters, yards;

    printf("Enter a value in meters: ");
    scanf("%f", &meters);

    yards = meters / 0.9144;

    printf("A leght of %fm equals to %fyd.", meters, yards);
}
