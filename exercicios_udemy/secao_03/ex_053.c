/*Make a program to read the dimensions of a plot of land (length and width), as well as the price of the meter of canvas,
print out the cost to fence this same plot with canvas.*/

#include <stdio.h>
#include <math.h>

int main(){
    float length, width, perimeter, canvas_price, total_cost;

    printf("Enter the dimensions in meters (length x width): ");
    scanf("%f x %f", &length, &width);
    printf("Enter the canvas price per meter: $ ");
    scanf("%f", &canvas_price);

    perimeter = (length * 2) + (width * 2);
    total_cost = perimeter * canvas_price;

    printf("To wire fence this perimeter will cost: $ %.2f", total_cost);
}
