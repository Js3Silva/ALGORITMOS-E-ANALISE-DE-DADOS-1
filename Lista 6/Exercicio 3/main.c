#include <stdio.h>
#include <stdlib.h>

int main()
{
     srand(time(0));

     float* vetorB = (float*) malloc(20 * sizeof(float));
     float* vetorA = (float*) malloc(20 * sizeof(float));

     printf("Antes de inverter:\n");
     for(int i = 0; i < 20; i++){
        vetorA[i] = rand()% 10 + 1;
        printf("%.2f\n", vetorA[i]);
     }
     printf("\n");

     int j = 19;
     for(int i = 0; i < 20; i++){
        vetorB[i] = vetorA[j];
        j--;
     }

     printf("VetorA invertido:\n");
     for(int i = 0; i < 20; i++){
       vetorA[i] = vetorB[i];
       printf("%.2f ", vetorA[i]);
     }

    free(vetorA); // Libera a memória alocada para o vetorA
    free(vetorB); // Libera a memória alocada para o vetorB

    return 0;

}
