//Read a speed in m/s (meters per second) and present it converted in km/h (kilometers per hour).

#include <stdio.h>

int main(){
    float meters_per_second;
    float kilometers_per_hour;

    printf("Enter a value in m/s: ");
    scanf("%f", &meters_per_second);

    kilometers_per_hour = meters_per_second * 3.6;

    printf("%fm/s speed is equal to %fkm/h", meters_per_second, kilometers_per_hour);
}
