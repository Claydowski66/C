//Read an integer and print its predecessor and successor.

#include <stdio.h>

int main(){
    int number, predecessor, successor;

    printf("Enter an integer: ");
    scanf("%d", &number);

    predecessor = number - 1;
    successor = number + 1;

    printf("\nThe entered number was: %d.", number);
    printf("\nPredecessor: %d.", predecessor);
    printf("\nSuccessor: %d.", successor);
}
