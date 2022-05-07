/*Be "a" and "b" cathetus of a triangle, where the hypotenuse is obtained from the equation: hypotenuse = sqrt(a^2 + b^2). Write a program that receives the "a" and "b" values
calculate the hypotenuse value and print the result.*/

#import <stdio.h>
#import <math.h>

int main(){
    float cathetus_a, cathetus_b, hypotenuse;

    printf("Enter the value a: ");
    scanf("%f", &cathetus_a);
    printf("Enter the value b: ");
    scanf("%f", &cathetus_b);

    hypotenuse = sqrt(pow(cathetus_a, 2) + pow(cathetus_b, 2));

    printf("Hypotenuse: %f", hypotenuse);
}
