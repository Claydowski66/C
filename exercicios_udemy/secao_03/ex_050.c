//Implement a program that calculates the person's year of birth from their age and the current year.

#include <stdio.h>

int main(){
    int current_year, years_old, year_of_birth;

    printf("Enter the current year: ");
    scanf("%d", &current_year);
    printf("How old are you this year: ");
    scanf("%d", &years_old);

    year_of_birth = current_year - years_old;

    printf("Your year of birth is: %d", year_of_birth);
}
