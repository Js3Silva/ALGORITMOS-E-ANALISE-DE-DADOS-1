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
    return 0;
}
