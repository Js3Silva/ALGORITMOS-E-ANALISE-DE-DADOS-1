#include <stdio.h>i

int main()
{
    float nota1, nota2, nota3, media;
    char nome[15];

    printf("Digite seu nome:");
    scanf("%s", &nome);
    printf("Digite 3 notas:");
    scanf("%f" "%f" "%f",&nota1, &nota2, &nota3);

    media = nota1+nota2+nota3;
    media = media/2;

    if(media>=6)
        printf("Parabens %s, voce foi aprovado com nota %f",nome, media);

        else if(media<6)
        printf("%s, voce foi reprovado com nota %f", nome,media);

        else
        printf("%s, Digite um valor menor ou igual a 10", nome);

}
