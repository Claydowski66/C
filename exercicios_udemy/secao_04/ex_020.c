/*Dado três valores, "A", "B" e "C", verificar se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguintes conceitos:
    1. O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
    2. Chama-se equilátero o triângulo que têm três lados iguais.
    3. Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
    4. Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, C;

    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &A);
    printf("Digite o valor do segundo lado: ");
    scanf("%d", &B);
    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &C);

    int forma_triangulo = 0;

    if((A + B > C) && (A + C > B) && (B + C > A)){
        printf("É possível formar um triângulo com esses valores.\n");
        forma_triangulo = 1;
    }
    else{
        printf("Não e possível formar um triângulo com esses valores.\n");
    }


    if(forma_triangulo == 1){
        if(A == B && B == C){
            printf("O triângulo formado é equilátero.");
        }
        else if((A != B) && (A != C) && (B != C)){
            printf("O triângulo formado é escaleno.");
        }
        else{
            printf("O triângulo formado é isósceles.");
        }
    }
    else{
        exit(0);
    }
}
