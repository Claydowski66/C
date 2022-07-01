/*Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira
e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a media do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para a aprovação deve ser igual ou
superior a 60 pontos.*/

#import <stdio.h>

int main()
{
float peso1, peso2, nota1, nota2, nota3, nota_total, media_ponderada;
peso1 = 7.5;
peso2 = 15;

printf("Insira a nota da primeira prova: ");
scanf("%f", &nota1);
printf("Insira a nota da segunda prova: ");
scanf("%f", &nota2);
printf("insira a nota da terceira prova: ")/
scanf("%f", &nota3);

nota_total = ((nota1 + nota2) * peso1) + (nota3 * peso2);
media_ponderada = nota_total / 3;

printf("\nA nota total foi: %.2f", nota_total);
printf("\nA media ponderada foi: %.2f\n", media_ponderada);

if(media_ponderada >= 60)
{
    printf("O aluno foi aprovado.");
}
else
{
    printf("O aluno foi reprovado");
}
}
