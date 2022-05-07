//Read the lenght and radius of a circular cylinder and print its volume.

#include <stdio.h>
#include <math.h>

int main(){
    float length, radius, area, pi;
    pi = 3.14159265358979323846;

    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = pi * pow(radius, 2) * length;

    printf("The total area of a circular cylinder with length %f and radius %f is: %f.", length, radius, area);
}
