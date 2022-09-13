/*Escreva um menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.
    1- Soma de 2 números.
    2- Diferença entre 2 números (Maior pelo menor).
    3- Produto entre 2 números.
    4- Divisão entre 2 números. (O denominador não pode ser zero).
    Opção: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "portuguese");
    system("cls");

    int escolha;

    printf("-------------------- Escolha a opcao: --------------------");
    printf("\n1- Soma de 2 números.");
    printf("\n2- Diferença entre 2 números.");
    printf("\n3- Produto entre 2 números.");
    printf("\n4- Divisão entre 2 números.");
    printf("\n----------------------------------------------------------");
    printf("\nOpção: ");
    scanf("%d", &escolha);

    float valor_1, valor_2, resultado;

    switch (escolha){
    case 1:
        printf("Selecionado: Soma de 2 números.");

        printf("\n\nDigite o primeiro valor: ");
        scanf("%f", &valor_1);
        printf("Digite o segundo valor: ");
        scanf("%f", &valor_2);
        
        resultado = valor_1 + valor_2;

        printf("A soma entre %.2f e %.2f é: %.2f\n", valor_1, valor_2, resultado);
        break;

    case 2:
        printf("Selecionado: Diferença entre 2 números.");

        printf("\n\nDigite o primeiro valor: ");
        scanf("%f", &valor_1);
        printf("Digite o segundo valor: ");
        scanf("%f", &valor_2);

        if(valor_1 > valor_2 || valor_1 == valor_2){
            resultado = valor_1 - valor_2;
        }
        else{
            resultado = valor_2 - valor_1;
        }

        printf("A diferença entre %.2f e %.2f é: %.2f\n", valor_1, valor_2, resultado);
        break;

    case 3:
        printf("Selecionado: Produto entre 2 números.");

        printf("\n\nDigite o primeiro valor: ");
        scanf("%f", &valor_1);
        printf("Digite o segundo valor: ");
        scanf("%f", &valor_2);

        resultado = valor_1 * valor_2;

        printf("O produto da multiplicação entre %.2f e %.2f é: %.2f\n", valor_1, valor_2, resultado);
        break;

    case 4:
        printf("Selecionado: Divisão entre 2 números.");

        printf("\n\nDigite o dividendo: ");
        scanf("%f", &valor_1);
        printf("Digite o divisor: ");
        scanf("%f", &valor_2);

        resultado = valor_1 / valor_2;

        printf("O resultado da divisão de %.2f por %.2f é: %.2f\n", valor_1, valor_2, resultado);
        break;

    default:
        printf("Essa não é uma opção válida.\n");
        break;
    }

    system("pause");
}
