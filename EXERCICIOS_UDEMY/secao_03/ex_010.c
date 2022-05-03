#include <stdio.h>

int main(){
    float kilometers_per_hour;
    float meters_per_second;

    printf("Enter a value in km/h: ");
    scanf("%f", &kilometers_per_hour);

    meters_per_second = kilometers_per_hour / 3.6;

    printf("%fkm/h speed is equal to %fm/s.", kilometers_per_hour, meters_per_second);
}
