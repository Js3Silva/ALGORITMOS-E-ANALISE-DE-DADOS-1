#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char palavra[100];
    int k;

    printf("Digite a primeira palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    printf("Digite um numero: ");
    scanf("%d", &k);

    int tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        int valor;
        char caractere;

        valor = palavra[i];
        valor += k;
        caractere = valor;
        palavra[i] = caractere;
    }
   printf("%s\n", palavra);
}
