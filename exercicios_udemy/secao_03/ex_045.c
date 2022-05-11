/*Write a program to convert a upper case in lower case. Use the ASCII table to resolve the problem.*/

#include <stdio.h>

int main(){
    char upper, lower;
    printf("Enter a letter: ");
    scanf("%c", &upper);

    lower = upper + 32;

    printf("%c to %c", upper, lower);
}
