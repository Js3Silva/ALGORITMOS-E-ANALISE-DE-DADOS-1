#include <stdio.h>

int verifica(int numero);
int main()
{
    int N, numero;

    printf("Quantos valores voce deseja verificar?\n");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
    printf("Digite o valor do %d numero\n", i);
    scanf("%d", &numero);

    if(verifica(numero))
    printf("O numero e positivo\n");

    else
    printf("O numero e negativo\n");
    }
    return 0;
}

int verifica(int numero) {
    if(numero >= 0)
        return 1;

     else
        return 0;

}

