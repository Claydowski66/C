//Read an area value in square meters (m^2) and show it converted to acres.

#include <stdio.h>

int main(){
    float square_meters, acres;

    printf("Enter a value in square meters: ");
    scanf("%f", &square_meters);

    acres = square_meters * 0.0002471053814671;

    printf("An area of %fm^2 is approximately %fac.", square_meters, acres);
}
