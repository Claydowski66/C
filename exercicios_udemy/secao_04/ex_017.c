/*Faça um programa que calcule e mostre a área de um trapézio.
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

#include <stdio.h>

int main()
{
    float base_maior, base_menor, altura;

    { //Receber a base maior.
        retorno_1: //caso o número digitado seja inválido volta aqui.
        printf("Valor da base maior: ");
        scanf("%f", &base_maior);

        if(base_maior <= 0) //se o número digitado for invalido.
            {
                printf("A base maior n%co pode ser menor ou igual %c zero.\n", 198, 133);
                printf("Tente novamente.\n");
                goto retorno_1;
            }
    }

    { //Receber a base menor.
        retorno_2: //caso o número digitado seja inválido volta aqui.
        printf("Valor da base menor: ");
        scanf("%f", &base_menor);

        if(base_menor <= 0) //se o número digitado for inválido.
        { 
            printf("A base menor n%co pode ser menor ou igual %c zero.\n", 198, 133);
            printf("Tente novamente.\n");
            goto retorno_2;
        }
        else if(base_menor > base_maior) //se a base maior e a base menor estiver invertida.
        { 
            printf("Esta n%co %c a base menor.\n", 198, 130);
            printf("Inverta os valores.\n");
            goto retorno_1;
        }
    }

    { //Receber a altura.
        printf("Valor da altura: ");
        scanf("%f", &altura);
    }

    float trapezio = ((base_maior + base_menor) * altura) / 2;

    printf("A %crea do trap%czio %c: %.2f", 160, 130, 130, trapezio);
}
