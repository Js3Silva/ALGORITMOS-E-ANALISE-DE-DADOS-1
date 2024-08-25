#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra [] = {};
    char caractere;
    int n;

    printf("Informe a palavra:\n");
    gets(palavra);
    printf("Informe o caractere:\n");
    scanf(" %c", &caractere);
    printf("Informe a posicao de acordo com a palavra digitada:\n");
    scanf("%d", &n);

    palavra[n] = caractere;
    puts(palavra);
    return 0;
}
