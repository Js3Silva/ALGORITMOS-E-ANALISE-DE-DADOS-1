#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char palavra1[100];
    char palavra2[100];
    char palavra3[100];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';

    printf("Digite a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';

    printf("Digite a terceira palavra: ");
    fgets(palavra3, sizeof(palavra3), stdin);
    palavra3[strcspn(palavra3, "\n")] = '\0';

    if (strcmp(palavra1, palavra2) <= 0 && strcmp(palavra2, palavra3) <= 0)
        printf("%s\n", palavra3);
     else
        printf("Nao esta em ordem alfabética\n");


}
