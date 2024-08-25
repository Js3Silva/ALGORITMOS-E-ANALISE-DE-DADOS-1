#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_vetor(int n, int vetor[10][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }
}

void imprimir_maior(int n, int vetor[10][10]) {
    int posicao1 = 0, posicao2 = 0;
    int maior = vetor[0][0]; // Inicia com o primeiro elemento da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (maior < vetor[i][j]) {
                maior = vetor[i][j];
                posicao1 = i;
                posicao2 = j;
            }
        }
    }
    printf("Maior valor: %d\nPosição do vetor: %d,%d\n", maior, posicao1, posicao2);
}

void imprimir_menor(int n, int vetor[10][10]) {
    int posicao1 = 0, posicao2 = 0;
    int menor = vetor[0][0]; // Inicia com o primeiro elemento da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (menor > vetor[i][j]) {
                menor = vetor[i][j];
                posicao1 = i;
                posicao2 = j;
            }
        }
    }
    printf("Menor valor: %d\nPosição do vetor: %d,%d\n", menor, posicao1, posicao2);
}

int main() {
    int vetor[10][10];
    int n = 10;
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vetor[i][j] = rand() % 36 + 15; // Valores entre 15 e 50
        }
    }

    imprimir_vetor(n, vetor);
    imprimir_maior(n, vetor);
    imprimir_menor(n, vetor);

    return 0;
}

