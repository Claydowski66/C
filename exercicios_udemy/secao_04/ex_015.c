/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse numero. Isto é,
domingo se 1, segunda-feira se 2, e assim por diante.*/

#include <stdio.h>

int main()
{
    int escolha;

    printf("Digite um n%cmero (1 %c 7): ", 163, 133);
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Domingo");
        break;

    case 2:
        printf("Segunda-Feira");
        break;

    case 3:
        printf("Ter%ca-Feira", 135);
        break;
    
    case 4:
        printf("Quarta-Feira");
        break;

    case 5:
        printf("Quinta-Feira");
        break;

    case 6:
        printf("Sexta-Feira");
        break;

    case 7:
        printf("S%cbado", 160);
        break;
    
    default:
        printf("N%cmero Inv%clido.", 163, 160);
        break;
    }
}
