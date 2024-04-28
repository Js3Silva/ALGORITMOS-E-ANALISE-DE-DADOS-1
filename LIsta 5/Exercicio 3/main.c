#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerador, denominador;

    printf("Digite o numerador e o denominador sucessivamente\n");
    scanf("%d %d", &numerador, &denominador);

    printf("O resultado da divisao e: %d", divisao(numerador, denominador));
    return 0;
}


int divisao (int numerador, int denominador){

    if (numerador < denominador)
        return 0;

    else
        return 1 + divisao(numerador - denominador, denominador);
}
