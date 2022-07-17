/*A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório,
 a uma avaliação semetral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; 
 Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9)
 ou se foi aprovado. Faça todas as verificações necessárias.*/

int main()
{
    float trabalho_laboratorio, avaliacao_semestral, exame_final;
    
    trabalho_laboratorio = 0.6;
    avaliacao_semestral = 0.9;
    exame_final = 1.5;

    float nota_laboratorio, nota_semestral, nota_exame_final;

    printf("Digite a nota do Trabalho de Laborat%crio: ", 162);
    scanf("%f", &nota_laboratorio);
    printf("Digite a nota da Avalia%c%co Semestral: ", 135, 198);
    scanf("%f", &nota_semestral);
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &nota_exame_final);

    float resultado_laboratorio, resultado_semestral, resultado_exame_final, media_final;

    resultado_laboratorio = (nota_laboratorio * trabalho_laboratorio);
    resultado_semestral = (nota_semestral * avaliacao_semestral);
    resultado_exame_final = (nota_exame_final * exame_final);

    media_final = (resultado_laboratorio + resultado_semestral + resultado_exame_final) / 3;

    printf("Sua m%cdia final foi de: %.2f", 130, media_final);

    if(media_final >=0 && media_final <= 2.9)
    {
        printf("\nO aluno est%c reprovado.", 160);
    }
    else if(media_final >=3 && media_final <= 4.9)
    {
        printf("\nO aluno est%c de recupera%c%co.", 160, 135, 198);
    }
    else if(media_final >= 5 && media_final <= 10)
    {
        printf("\nO aluno est%c aprovado.", 160);
    }
    else
    {
        printf("\nEssa m%cdia n%co %c v%clida.", 130, 198, 130, 160);
    }
}
