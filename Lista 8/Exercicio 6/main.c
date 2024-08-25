#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char palavra[100];
    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra:\n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    printf("Digite a segunda palavra:\n");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';

    printf("Digite a terceira palavra:\n");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';

    int tamanho = strlen(palavra);
    if (tamanho < sizeof(palavra) - 1) {
    palavra[tamanho] = '-';
    palavra[tamanho + 1] = '\0';
    }

    tamanho = strlen(palavra1);
    if (tamanho < sizeof(palavra1) - 1) {
    palavra1[tamanho] = '-';
    palavra1[tamanho + 1] = '\0';
    }

    strcat(palavra, palavra1);
    strcat(palavra, palavra2);

    printf("%s", palavra);
}


/**************LÓGICA DE GARANTIR QUE NÃO HAJA ESTOURO DE BUFFER*******************
    if (strlen(palavra) + strlen(palavra1) + strlen(palavra2) < sizeof(palavra)) {
        strcat(palavra, palavra1);
        strcat(palavra, palavra2);
    } else {
        printf("Erro: espaço insuficiente para concatenar as strings.\n");
        return 1; // Encerra o programa com código de erro
    }
***********************************************************************************/
