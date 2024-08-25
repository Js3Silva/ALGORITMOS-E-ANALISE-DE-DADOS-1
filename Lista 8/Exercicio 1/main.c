#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char palavra[] = "engenharia";
    char vetor[20];

    printf("Digite uma palavra:\n");
    gets(vetor);

    int Resultado = strcmp(palavra, vetor);

    if(Resultado == 0)
        printf("1\n");

    else
        printf("0\n");

}
