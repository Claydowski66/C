//Read the side size of a square and print its area as a result.

#include <stdio.h>

int main(){
    float square_side, area;

    printf("Enter the side size of the square (m^2): ");
    scanf("%f", &square_side);

    area = square_side * square_side;

    printf("The square area is: %fm^2", area);
}
