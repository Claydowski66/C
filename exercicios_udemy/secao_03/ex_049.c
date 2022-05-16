/*Write a program to read the start time (hour, minute and second) and duration, in seconds, of a biological experiment.
The program should result with the new end time (hour, minuto e segundo) of the experiment.*/

#include <stdio.h>
#include <math.h>

int main(){
    int start_time_hours, start_time_minutes, start_time_seconds, hours_duration, minutes_duration, seconds_duration, end_time_hours, end_time_minutes, end_time_seconds, duration, initial_day, days_duration, final_day;
    initial_day = 1;
    days_duration = 0;

    printf("Enter a value in hours (hh:mm:ss): ");
    scanf("%d:%d:%d", &start_time_hours, &start_time_minutes, &start_time_seconds);
    printf("Enter the duration in seconds: ");
    scanf("%d", &duration);

    hours_duration = duration / 3600;
    end_time_hours = start_time_hours + hours_duration;

    minutes_duration = (duration - (hours_duration * 3600)) / 60;
    end_time_minutes = start_time_minutes + minutes_duration;

    seconds_duration = (duration - (hours_duration * 3600) - (minutes_duration * 60));
    end_time_seconds = start_time_seconds + seconds_duration;

    while (end_time_seconds >= 60)
    {
        end_time_seconds = end_time_seconds - 60;
        end_time_minutes = end_time_minutes + 1;
    }
    
    while (end_time_minutes >= 60)
    {
        end_time_minutes = end_time_minutes - 60;
        end_time_hours = end_time_hours + 1;
    }

    while (end_time_hours >= 24)
    {
        end_time_hours = end_time_hours - 24;
        days_duration = days_duration + 1;
    }

        final_day = initial_day + days_duration;

    printf("\nStart Time: Day %d (%d:%02d:%02d)", initial_day, start_time_hours, start_time_minutes, start_time_seconds);
    printf("\nDuration: %d:%02d:%02d", hours_duration, minutes_duration, seconds_duration);
    printf("\nEnd Time: Day %d (%d:%02d:%02d)", final_day, end_time_hours, end_time_minutes, end_time_seconds);
}
