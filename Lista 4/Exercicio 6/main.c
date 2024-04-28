#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);
double calcular_serie(int N);

int main() {
    int N;
    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    printf("O valor da serie S e: %.6f\n", calcular_serie(N));

    return 0;
}

// Função para calcular o valor da série
double calcular_serie(int N) {
    double S = 1.0; // Inicializa o valor de S com 1.0, já que a série começa com 1
    for (int i = 1; i <= N; i++) {
        S += 1.0 / fatorial(i); // Adiciona o termo 1/i! a S
    }
    return S;
}

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

