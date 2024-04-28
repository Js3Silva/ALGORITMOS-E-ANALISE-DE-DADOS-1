#include <stdio.h>
#include <stdlib.h>

void resultado(char escolha, float nota1, float nota2, float nota3){

float media;

if (escolha == 'A' && escolha == 'a'){
    media = (nota1 + nota2 + nota3)/3;
    printf("A media aritmetica e: %.2f\n", media);
}
else if (escolha == 'P' && escolha == 'p'){
    media = (nota1 * nota2 * nota3)/(nota1 + nota2 + nota3);
    printf("A media ponderada e: %.2f\n", media);
}
}

int main()
{
    float nota1, nota2, nota3;
    int alunos = 0;
    char escolha;


    printf("Quantos alunos voce deseja fazer a conta? \n");
    scanf("%d", &alunos);

    for(int i = 1;  i <= alunos; i++){
    printf("Digite [A] para tirar a media\nDigite [P] para tirar a media ponderada\n");
    scanf(" %c", &escolha);
    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: \n");
    scanf("%f", &nota3);
    resultado(escolha, nota1, nota2, nota3);
    }

    printf("Programa encerrado! \n");
    return 0;
}
