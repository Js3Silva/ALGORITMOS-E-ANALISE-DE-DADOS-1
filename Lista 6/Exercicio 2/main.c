#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int comp;
    int* vetorC = (int*) malloc(20 * sizeof(int));

    int* vetorA = (int*) malloc(10 * sizeof(int));
    printf("Digite os 10 valores do vetor A:\n");
    for(int i = 0; i<=10; i++){
    scanf("%d", &vetorA[i]);
    }

    int* vetorB = (int*) malloc(10 * sizeof(int));
    printf("Digite os 10 valores do vetor B:\n");
    for(int i = 0; i<=10; i++){
    scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
        if(vetorA[i] != vetorB[j])
        vetorC[i] = comp;
        }
    }

    for(int i = 0; i<10; i++){
        printf("AAAA%d\n", vetorC[i]);
    }

    free;
    return 0;
}

