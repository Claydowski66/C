/*Read the height of a step and the height that the user wants reach climbing the ladder.
Calculate and print how many steps the user needs to climb to reach their goal.*/

#include <stdio.h>
#include <math.h>

int main(){
    float step_height_cm, step_height_m, height_goal, steps;

    printf("Enter the step height (cm): ");
    scanf("%f", &step_height_cm);
    printf("Enter the height goal (m): ");
    scanf("%f", &height_goal);

    step_height_m = step_height_cm / 100;
    steps = ceil(height_goal / step_height_m);

    printf("To reach a height of %.2fm you need to climb %.0f steps.", height_goal, steps);
}
