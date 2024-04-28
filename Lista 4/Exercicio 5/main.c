#include <stdio.h>
#include <stdlib.h>

resultado(float media){

    if (media <= 39)
        printf("NOTA F\n");

    else if( media >= 40 && media <= 59)
        printf("NOTA E\n");

    else if( media >= 60 && media <= 69)
        printf("NOTA D\n");

    else if( media >= 70 && media <= 79)
        printf("NOTA C\n");

    else if( media >= 80 && media <= 89)
        printf("NOTA B\n");

    else if( media >= 90)
        printf("NOTA A\n");
}


int main()
{
    float media;
    int alunos, op = 0;

    printf("Digite o numero de alunos que voce ira inserir a nota:\n");
    scanf("%d", &alunos);

    while(alunos > op){
    printf("Digite a media final do aluno:\n");
    scanf("%f", &media);
    resultado(media);
    op++;
    }
    printf("Programa finalizado! \n");
    return 0;
}
