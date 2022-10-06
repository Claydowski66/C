/*Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva de acordo com a tabela abaixo
    *menor que 8 = Venda o Carro!
    *entre 8 e 14 = Econômico!
    *maior que 12 = Super Econômico!
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
//Limpar o console e setar os caracteres para português.
    system("cls");
    setlocale(LC_CTYPE, "portuguese");

//Receber valores.
    float distancia, consumo, km_por_litro;

    printf("Digite a distância percorrida: ");
    scanf("%f", &distancia);
    printf("Digite o consumo: ");
    scanf("%f", &consumo);

//Calculo.
    km_por_litro = distancia / consumo;

//Verificação.
    if(km_por_litro < 8){
        printf("\nVenda o carro!\n");
    }
    else if(km_por_litro >= 8 && km_por_litro <= 14){
        printf("\nEconômico!\n");
    }
    else{
        printf("\nSuper Econômico!\n");
    }

//Manter aberto para visualização.
    system("pause");
}
