#include <stdio.h>
#include <stdlib.h>

int main(){

    srand(time(0));
    int* vetorA = (int*) malloc(10 * sizeof(int));
    int aux;

    for(int i = 0; i < 10; i++){
        vetorA[i] = rand() % 50 + 1; //gera inteiro aleatório entre 1 e 10
    }

    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(vetorA[i] > vetorA[j]){
            aux = vetorA[i];
            vetorA[i] = vetorA[j];
            vetorA[j] = aux;
            }
        }
    }

        printf("A sequencia ordenada e:\n");
        for(int i = 0; i < 10; i++){
    printf("%d\n", vetorA[i]);
    }

 return 0;
}
