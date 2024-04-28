#include <stdio.h>
#include <stdlib.h>

void ordem (int A, int B, int C){

    if(A < B && A < C && C < B){
        printf("Segue os valores em ordem crescente: %d - %d - %d\n", A, C, B);
    }
    else if (B < A && B < C && C < A){
        printf("Segue os valores em ordem crescente: %d - %d - %d\n", B, C, A);
    }
    else if (C < A && C < B && B < A){
        printf("Segue os valores em ordem crescente: %d - %d - %d\n", C, B, A);
    }
    else if(A < B && A < C && B < C){
        printf("Segue os valores em ordem crescente: %d - %d - %d\n", A, B, C);
    }
    else if (B < A && B < C && A < C){
        printf("Segue os valores em ordem crescente: %d - %d - %d\n", B, A, C);
    }
    else if (C < A && C < B && A < B){
        printf("Segue os valores em ordem crescente: %d - %d - %d\n", C, A, B);
    }
}

int main()
{
    int conjuntos, A, B, C;

    printf("Quantos conjuntos voce deseja inserir?\n");
    scanf("%d", &conjuntos);

    for(int i = 0; i < conjuntos;i++){
        A=0, B=0, C=0;
        printf("Digite o primeiro valor inteiro:\n");
        scanf("%d", &A);
        printf("Digite o segundo valor inteiro:\n");
        scanf("%d", &B);
        printf("Digite o terceiro valor inteiro:\n");
        scanf("%d", &C);
        ordem(A, B, C);
    }
    printf("Programa encerrado!\n");

    return 0;
}
