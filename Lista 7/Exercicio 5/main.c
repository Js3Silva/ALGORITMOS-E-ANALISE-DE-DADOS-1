#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_vetor(int n, int vetor[10][10], int x, int y)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == x && j == y)
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int vetor[10][10];
    int n = 10, x, y;
    srand(time(NULL));

    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        vetor[i][j] = rand() % 36 + 15;;
    }
 }

     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite o valor da posicao que voce deseja: x,y:");
    scanf("%d %d", &x, &y);

    imprimir_vetor(n, vetor, x, y);

    return 0;
}
