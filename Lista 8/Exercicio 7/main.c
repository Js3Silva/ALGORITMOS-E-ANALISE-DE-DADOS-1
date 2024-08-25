#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char palavra[100];

    printf("Digite um numero:\n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho = strlen(palavra);
    int cont = 0, ver = 1;

    for(int i = 0; i < tamanho; i++){
        if(palavra[i] > 47 && palavra[i] < 58)
            continue;
        else if(palavra[i] == ',' || palavra[i] == '.')
            cont++;

        else {
            ver = 0;
            break;
    }
    }

    if(ver && cont == 1)
        printf("FLOAT");
    else if(ver == 1 && cont == 0)
        printf("INT");
    else
        printf("não se aplica\n");

}
