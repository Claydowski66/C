//Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não divisivel por 100.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_CTYPE, "portuguese");
    system("cls");

    int ano, bissexto;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0) ? 1 : 0;

    if(bissexto == 1){
        printf("O ano de %d é bissexto.\n", ano);
    }
    else{
        printf("O ano de %d não é bissexto.\n", ano);
    }

    system("pause");
}
