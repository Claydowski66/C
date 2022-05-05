//Read an integer and print the sum of the successor of its triple and the predecessor of its double.

#include <stdio.h>

int main(){
    int value_one, value_two, value_three, sum;

    printf("Enter an integer: ");
    scanf("%d", &value_one);

    value_two = (value_one * 3) + 1;
    value_three = (value_one * 2) - 1;
    sum = value_two + value_three;
    
    printf("\nThe entered number was: %d", value_one);
    printf("\nSuccessor of its triple: %d", value_two);
    printf("\nPredecessor of its double: %d", value_three);
    printf("\n\nSum: %d", sum);
}
