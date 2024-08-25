#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';

    printf("Digite a primeira palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';

    strcat(palavra1, palavra2); //strcat

    printf("%s\n", palavra1);
    return 0;
}
