/*Three friend played the lottery. If they win, the prize should be shared in proportion to the amount each one gave
to place the bet. Write a program that reads the amount invested by each player, the amount of the prize and prints
out how much each player would win from the prize based on the amount invested.*/

#include <stdio.h>

int main(){
    float total_prize, first_player_amount, second_player_amount, third_player_amount;

    printf("Enter the total prize: R$ ");
    scanf("%f", &total_prize);

    printf("Enter the investment of the first player: R$ ");
    scanf("%f", &first_player_amount);
    printf("Enter the investment of the second player: R$ ");
    scanf("%f", &second_player_amount);
    printf("Enter the investment of the third player: R$ ");
    scanf("%f", &third_player_amount);

    float total_invested, first_player_percent, second_player_percent, third_player_percent;
    total_invested = first_player_amount + second_player_amount + third_player_amount;
    first_player_percent = first_player_amount / total_invested;
    second_player_percent = second_player_amount / total_invested;
    third_player_percent = third_player_amount / total_invested;

    float first_player_prize, second_player_prize, third_player_prize;
    first_player_prize = total_prize * first_player_percent;
    second_player_prize = total_prize * second_player_percent;
    third_player_prize = total_prize * third_player_percent;
    
    printf("\nTotal Prize: R$ %.2f", total_prize);
    printf("\n\nTotal Invested: R$ %.2f", total_invested);
    printf("\n\nIf they won: ");
    printf("\nThe first player would receive: R$ %.2f", first_player_prize);
    printf("\nThe second player would receive: R$ %.2f", second_player_prize);
    printf("\nThe third player would receive: R$ %.2f", third_player_prize);
}
