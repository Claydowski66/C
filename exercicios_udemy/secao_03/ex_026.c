//Read an area value in square meters (m^2) and show it converted to hectares.

#include <stdio.h>

int main(){
    float square_meters, hectares;

    printf("Enter a value in square meters: ");
    scanf("%f", &square_meters);

    hectares = square_meters * 0.0001;

    printf("An area of %fm^2 equals to %fha.", square_meters, hectares);
}
