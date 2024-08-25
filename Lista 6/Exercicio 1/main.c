#include <stdio.h>
#include <stdlib.h>

long int calcularFatorial(int numero) {
    long int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {

    int* vetorA = (int*) malloc(15 * sizeof(int));
    //Definindo tamanho do vetor
    for(int i = 0; i<15; i++){
    scanf("%d", &vetorA[i]);
    }

    long int* vetorB = (long int*) malloc(15 * sizeof(long int));

    for (int i = 0; i < 15; i++) {
        vetorB[i] = calcularFatorial(vetorA[i]);
    }

    // Exibindo os vetores A e B
    printf("Vetor A: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B fatoriais do Vetor A: ");
    for (int i = 0; i < 15; i++) {
        printf("Fatorial do %dº numero %ld \n", i, vetorB[i]);
    }
    printf("\n");

    free(vetorA);

    return 0;
}
