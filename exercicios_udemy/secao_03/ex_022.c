//Read a leght value in yards and show it converted to meters.

#include <stdio.h>

int main(){
    float yards, meters;

    printf("Enter a value in yards: ");
    scanf("%f", &yards);

    meters = 0.9144 * yards;

    printf("A leght of %fyd equals to %fm", yards, meters);
}
