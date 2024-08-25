#include <stdio.h>
#include <stdlib.h>

void imprimir_vetor(float *vetor, int n)
{
    printf("Vetor impresso:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(vetor + i));
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    float vetor_real[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor_real[i]);
    }

    imprimir_vetor(vetor_real, n);

    return 0;
}

