/*Faça um programa que mostre ao usuário um menu com 4 opções de operações matematicas (as básicas, por exemplo). O usuário escolhe uma das opções
e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;

    printf("Qual opera%c%co deseja realizar?\n", 135, 198);
    printf("[1] - Soma\n[2] - Subtra%c%co\n[3] - Multiplica%c%co\n[4] - Divis%co\n", 135, 198, 135, 198, 198);
    printf("Sua Escolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            printf("Voc%c escolheu soma\n", 136);
            break;
    
        case 2:
            printf("Voc%c escolheu subtra%c%co\n", 136, 135, 198);
            break;

        case 3:
            printf("Voc%c escolheu multiplica%c%co\n", 136, 135, 198);
            break;

        case 4:
            printf("Voc%c escolheu divis%co\n", 136, 198);
            break;
        
        default:
            printf("A op%c%co escolhida n%co %c v%clida.\n", 135, 198, 198, 130, 160);
            exit(0);
    }

    float valor_1, valor_2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor_1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor_2);

    float resultado;

    switch (escolha)
    {
        case 1:
            resultado = valor_1 + valor_2;
            break;

        case 2:
            resultado = valor_1 - valor_2;
            break;

        case 3:
            resultado = valor_1 * valor_2;
            break;

        case 4:
            resultado = valor_1 / valor_2;
            break;
    }

    printf("O resultado da opera%c%co %c: %.2f", 135, 198, 130, resultado);
}
