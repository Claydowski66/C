//Read the radius value of a circle, calculate and print its corresponding circle area.

#include <stdio.h>
#include <math.h>

int main(){
    float circle_radius, circle_area, pi;
    pi = 3.14159265358979323846;

    printf("Enter the circle radius: ");
    scanf("%f", &circle_radius);

    circle_area = pi * (pow(circle_radius, 2));

    printf("The cicle area is: %f", circle_area);    
}
