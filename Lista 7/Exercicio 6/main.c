#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_valor(int n, int vetor[10][10], int x)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vetor [i][j] == x){
                posicao1 = vetor [i];
                posicao2 = vetor [j];
            }
        }
    }

}

int main()
{
    int vetor[10][10];
    int n = 10, x;
    srand(time(NULL));

    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        vetor[i][j] = rand() % 36 + 15;;
    }
 }
    printf("Digite um valor para a busca: \n");
    scanf("%d", &x);

    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        printf("%d ", vetor[i][j]);
    }
    printf("\n");
    }

    imprimir_valor(n, vetor, x);
    return 0;
}
