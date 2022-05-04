//Read a speed in km/h (kilometers per hour) and show it converted in m/s (meters per second).

#include <stdio.h>

int main(){
    float kilometers_per_hour, meters_per_second;

    printf("Enter a value in km/h: ");
    scanf("%f", &kilometers_per_hour);

    meters_per_second = kilometers_per_hour / 3.6;

    printf("%fkm/h speed is equivalent to %fm/s.", kilometers_per_hour, meters_per_second);
}
