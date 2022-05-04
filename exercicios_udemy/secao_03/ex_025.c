//Read an area value in acres and show it converted to square meters (m^2).

#include <stdio.h>

int main(){
    float acres, square_meters;

    printf("Enter a value in acres: ");
    scanf("%f", &acres);

    square_meters = acres * 4048.58;

    printf("An area of %fac is approximately %fm^2.", acres, square_meters);
}
