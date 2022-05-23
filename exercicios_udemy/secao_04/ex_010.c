/*Write a program that reads the a person's height and gender, calculates and prints his ideal weight,
using these formulas (where "h" corresponds to height):
    > Mens: (72.7 * h) - 58
    > Womens: (62.1 * h) - 44.7
*/

#include <stdio.h>

int main()
{
    float height, ideal_weight;
    char gender;

    printf("Gender (M/F): ");
    scanf("%c", &gender);
    printf("Height: ");
    scanf("%f", &height);

    if(gender == 'M' || gender == 'm')
    {
        ideal_weight = (72.7 * height) - 58;
        printf("Ideal Weight: %.1f", ideal_weight);
    }
    else if(gender == 'F' || gender == 'f')
    {
        ideal_weight = (62.1 * height) - 44.7;
        printf("Ideal Weight: %.1f", ideal_weight);
    }
    else
    {
        printf("Invalid character");
    }
}
