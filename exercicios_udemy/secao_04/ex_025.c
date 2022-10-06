//Calcule as raizes da equação de 2º grau.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
//Limpar console e setar os caracteres para Português.
    system("cls");
    setlocale(LC_CTYPE, "portuguese");

//Atribuir valor as variáveis.
    float a, b, c;

    printf("Valor de a: ");
    scanf("%f", &a);
    printf("Valor de b: ");
    scanf("%f", &b);
    printf("Valor de c: ");
    scanf("%f", &c);

//Calcular o delta.
    float delta, raiz_de_delta, x1, x2;
    delta = (pow(b, 2)) - (4 * a * c);

//Calcular a raiz.
    if(delta < 0){
        printf("\nNão existe raíz real.\n");
        goto pause;
    }
    else if(delta == 0){
        printf("\nExiste uma raíz real.");

        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("\nA raiz real é: %.1f\n", x1);
    }
    else{
        printf("\nExistem duas raízes reais.\n");

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A primeira raíz é: %.1f\n", x1);
        printf("A segunda raíz é: %.1f\n", x2);
    }

//Manter o programa aberto para visualização.
    pause:
    system("pause");
}
