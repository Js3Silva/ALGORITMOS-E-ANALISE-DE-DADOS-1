#include <stdio.h>
#include <stdlib.h>

double calcular_s(int N);
int main()
{
    int N;

    printf("Digite um numero inteiro e positivo\n");
    scanf("%d", &N);

    printf("O valor de S e: %.2lf\n", calcular_s(N));
}

double calcular_s(int N){

    double S = 0;
    for(int i = 1; i <= N; i++){
        S+= ((i*i)+1)/(double)(i+3);
    }
    return S;
}
