#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vetorA = (int*)malloc(10 * sizeof(int));
    int ParImpar[2] = {0};

    printf("Digite os elementos 10 elementos:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < 10; i++){
        if (vetorA[i] % 2 == 0)
            ParImpar[0]++;
         else
            ParImpar[1]++;
    }

    printf("Quantidade de numeros pares em A: %d\n", ParImpar[0]);
    printf("Quantidade de numeros impares em A: %d\n", ParImpar[1]);

    return 0;
}
