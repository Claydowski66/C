//Read a distance in miles and show it converted to kilometers.

#include <stdio.h>

int main(){
    float miles, kilometers;

    printf("Enter a value in miles: ");
    scanf("%f", &miles);

    kilometers = 1.609344 * miles;

    printf("A distance of %fmi is equivalent to %f km", miles, kilometers);
}
