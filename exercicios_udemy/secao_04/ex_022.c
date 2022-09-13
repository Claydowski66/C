/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para a aposentadoria são:
    1- Ter pelo menos 65 anos.
    2- Ou ter trabalhado pelo menos 30 anos.
    3- Ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "portuguese");
    system("cls");

    int idade, tempo_de_servico;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Quanto tempo de serviço? ");
    scanf("%d", &tempo_de_servico);

    if((idade >= 60 && tempo_de_servico >= 25) || (idade >= 65) || (tempo_de_servico >= 30)){
        printf("Você já pode se aposentar.\n");
    }
    else{
        printf("Você ainda não pode se aposentar\n");
    }

    system("pause");
}
