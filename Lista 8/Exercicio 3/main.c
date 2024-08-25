#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra [100] = {};
    char caractere;
    int cont = 0;

    printf("Digite uma palavra: \n");
    gets(palavra);
    printf("Digite um caractere\n");
    scanf(" %c", &caractere);

    int T = strlen(palavra);

    for(int i = 0; i < T; i++){
        if (palavra[i] == caractere)
        cont ++;
    }

    printf("%d", cont);

    return 0;
}
