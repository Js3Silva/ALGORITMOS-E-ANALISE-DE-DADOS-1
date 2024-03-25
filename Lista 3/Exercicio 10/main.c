#include <stdio.h>
#include <stdlib.h>

void main()
{
    float valor, soma;

    printf("Digite o primeiro valor da  soma: \n");
    scanf("%f", &valor);
    printf("Se desejar parar digite [0] \n");

    for( valor; valor!=0; valor){
        soma += valor;
        printf("Digite o valor que deseja somar a %.2f: ", soma);
        scanf("%f", &valor);
    }

    printf("A soma dos valores e: %.2f \n", soma);
    return 0;
}

/**************************************************************************
WHILE

void main()
{
    float valor, soma;

    printf("Digite o primeiro valor da  soma: \n");
    scanf("%f", &valor);
    printf("Se desejar parar digite [0] \n");

    while(valor!=0){
        soma += valor;
        printf("Digite o valor que deseja somar a %.2f: ", soma);
        scanf("%f", &valor);
    }

    printf("A soma dos valores e: %.2f \n", soma);
    return 0;
}

***************************************************************************
DO WHILE

void main()
{
    float valor, soma;

    printf("Digite o primeiro valor da  soma: \n");
    scanf("%f", &valor);
    printf("Se desejar parar digite [0] \n");

    do{

        soma += valor;
        printf("%.2f + : ", soma);
        scanf("%f", &valor);

    }while(valor != 0);

    printf("A soma dos valores e: %.2f \n", soma);

    return 0;
}

***************************************************************************
FOR

void main()
{
    float valor, soma;

    printf("Digite o primeiro valor da  soma: \n");
    scanf("%f", &valor);
    printf("Se desejar parar digite [0] \n");

    for( valor; valor!=0; valor){
        soma += valor;
        printf("Digite o valor que deseja somar a %.2f: ", soma);
        scanf("%f", &valor);
    }

    printf("A soma dos valores e: %.2f \n", soma);
    return 0;
}

**************************************************************************/
