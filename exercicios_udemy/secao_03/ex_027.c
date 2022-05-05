//Read an area value in hectares and show it converted to square meters (m^2).

#include <stdio.h>

int main(){
    float hectares, square_meters;

    printf("Enter a value in hectares: ");
    scanf("%f", &hectares);

    square_meters = hectares * 10000;

    printf("An area of %fha equals to %fm^2.", hectares, square_meters);
}
