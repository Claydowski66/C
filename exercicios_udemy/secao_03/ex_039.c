/*The prize of R$ 780000.00 will be divided between three winners of a contest.
    > The first winner will receive 46%.
    > The second will receive 32%.
    > The third will receive the the rest.
Calculate and prints the received amount by each of the winners.*/

#include <stdio.h>

int main(){
    float first_winner_prize, second_winner_prize, third_winner_prize, total_prize;

    total_prize = 780000.00;

    first_winner_prize = total_prize * 0.46;
    second_winner_prize = total_prize * 0.32;
    third_winner_prize = total_prize * (1 - 0.46 - 0.32);

    printf("The prize for each winner is: ");
    printf("\nFirst Prize: $ %.2f", first_winner_prize);
    printf("\nSecond Prize: $ %.2f", second_winner_prize);
    printf("\nThird Prize: $ %.2f", third_winner_prize);
    printf("\n\nTotal Prize: $ %.2f", total_prize);
}
