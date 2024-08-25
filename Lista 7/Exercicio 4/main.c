#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_vetor(int n, int vetor[10][10])
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }
}

void soma_diagonal(int n, int vetor[10][10]){
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i][i];
    }
    printf("Soma dos elementos da diagonal principal: %d\n", soma);
}

int main()
{
    int vetor[10][10];
    int n = 10;
    srand(time(NULL));

    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        vetor[i][j] = rand() % 36 + 15;;
    }
 }

    imprimir_vetor(n, vetor);
    soma_diagonal(n, vetor);
    return 0;
}
