//Read an integer value in seconds and print in hours, minutes and seconds.

#include <stdio.h>
#include <math.h>

int main(){
    int total_seconds, hours, minutes, seconds;

    printf("Enter the total time in seconds: ");
    scanf("%d", &total_seconds);

    hours = floor(total_seconds / 3600);
    minutes = floor((total_seconds - (hours * 3600)) / 60);
    seconds = (total_seconds - (hours * 3600) - (minutes * 60));

    printf("%d seconds equals to: %d:%d:%02d", total_seconds, hours, minutes, seconds);
}
