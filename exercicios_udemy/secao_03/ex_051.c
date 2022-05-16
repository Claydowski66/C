//Write a program that reads the "x" and "y" coordinates of points in R^2 and calculate their distance from the origin (0, 0).

#include <stdio.h>
#include <math.h>

int main(){
    float x, y, r;

    printf("Enter the x coordinate: ");
    scanf("%f", &x);
    printf("Enter the y coordinate: ");
    scanf("%f", &y);


    r = sqrt(pow(x, 2) + pow(y, 2));

    printf("The distance from the origin is: %.2f", r);
}
