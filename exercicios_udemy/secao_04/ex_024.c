//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG: 7%; SP: 12%; RJ: 15%; MS: 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
//Limpar terminal e setar os caracteres para o português.
    system("cls");
    setlocale(LC_CTYPE, "Portuguese");

//Solicitar valor do produto.
    float valor;
    printf("Valor do Produto: R$ ");
    scanf("%f", &valor);

//Verificar se o número é positivo.
    if(valor <= 0){
        printf("\nO valor não pode ser negativo, por favor, tente novamente com um valor positivo.\n\n");
        goto pause;
    }

//Solicitar qual o estado destino.
    printf("\nPara qual estado o produto será vendido?");
    printf("\n\n   Estados disponiveis\n");
    printf("-------------------------\n");
    printf("[1] - Minas Gerais\n");
    printf("[2] - São Paulo\n");
    printf("[3] - Rio de Janeiro\n");
    printf("[4] - Mato Grosso do Sul\n");
    printf("-------------------------\n");

    int estado_destino;
    printf("Estado destino: ");
    scanf("%d", &estado_destino);

//Definir a alíquota para o estado escolhido.
    float aliquota;

    switch (estado_destino)
    {
    case 1:
        aliquota = 0.07;
        break;

    case 2:
        aliquota = 0.12;
        break;

    case 3:
        aliquota = 0.15;
        break;

    case 4:
        aliquota = 0.08;
        break;
    
    default:
        printf("\nO número de estado digitado não é valido, por favor, siga a tabela.\n\n");
        goto pause;
    }

//Calcular o imposto e o valor final do produto.
    float imposto, valor_final;
    imposto = valor * aliquota;
    valor_final = valor + imposto;

//Imprimir na tela o valor final.
    system("cls");

    printf("Valor do produto: R$ %.2f", valor);
    printf("\nValor do imposto: R$ %.2f", imposto);
    printf("\n\nValor Total: R$ %.2f\n\n", valor_final);

//Manter o programa aberto para visualização.
    pause:
    system("pause");
}
