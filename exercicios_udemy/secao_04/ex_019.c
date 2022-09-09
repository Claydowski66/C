/*Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou 5, mas não simultaneamente pelos dois.*/

#include <stdio.h>
#include <locale.h>

int main(){
    int escolha;

    printf("Digite um número inteiro: ");
    scanf("%d", &escolha);

    int div_por_3, div_por_5;
    div_por_3 = escolha % 3;
    div_por_5 = escolha % 5;

    if(div_por_3 == 0 ^ div_por_5 == 0){
        if(div_por_3 == 0){
            printf("O número %d é divisível por 3, mas, não por 5.", escolha);
        }
        else{
            printf("O número %d é divisível por 5, mas, não por 3.", escolha);
        }
    }
    else if(div_por_3 == 0 && div_por_5 == 0){
        printf("O número %d é divisível tanto por 3 quanto por 5.", escolha);
    }
    else{
        printf("O número %d não é divisível por 3 e nem por 5.", escolha);
    }
}
