#include <stdio.h>
#include <stdlib.h>

void main()
{
    float A,B,C,armazena;

    printf("DIGITE O VALOR DE A, B E C RESPECTIVAMENTE: \n");
    scanf("%f" "%f" "%f", &A, &B, &C);

    if (A > B){
        armazena = A;
        A = B;
        B = armazena;
    }
    if (A > C) {
        armazena = A;
        A = C;
        C = armazena;
    }
    if (B > C) {
        armazena = B;
        B = C;
        C = armazena;
    }

    printf("Valores ordenados: %.2f, %.2f, %.2f\n", A, B, C);

    return 0;
}
