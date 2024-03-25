#include <stdio.h>
#include <stdlib.h>

void main()
{
    int idade;

    printf("Digite um valor inteiro que represente uma idade humana: \n");
    scanf("%d", &idade);

    for (idade; idade > 140; idade){
        printf("Digite um valor inteiro que represente uma idade humana: \n");
        scanf("%d", &idade);
    }

    printf("%d Anos", idade);

}

/**************************************************************************************
DO WHILE

void main()
{
    int idade;

    do{
        printf("Digite um valor inteiro que represente uma idade humana: \n");
        scanf("%d", &idade);

    }while(idade>140);              //Enquanto o valor digitado não for menor que 140, irá continuar solicitando

    printf("%d Anos", idade);

    return 0;
}

**************************************************************************************
FOR

void main()
{
    int idade;

    printf("Digite um valor inteiro que represente uma idade humana: \n");
    scanf("%d", &idade);

    for (idade; idade > 140; idade){
        printf("Digite um valor inteiro que represente uma idade humana: \n");
        scanf("%d", &idade);
    }

    printf("%d Anos", idade);

}

**************************************************************************************
WHILE

void main()
{
    int idade;

    printf("Digite um valor inteiro que represente uma idade humana: \n");
    scanf("%d", &idade);

    while (idade > 140){
        printf("Digite um valor inteiro que represente uma idade humana: \n");
        scanf("%d", &idade);
    }

    printf("%d Anos", idade);

}

*************************************************************************************/
