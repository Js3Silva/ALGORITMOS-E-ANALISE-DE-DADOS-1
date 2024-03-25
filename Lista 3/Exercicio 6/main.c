#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;

    printf("Digite o valor de N para calcular o N-esimo termo da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("O %d-esimo termo da sequencia de Fibonacci e: %d\n", n, fibonacci(n));

    return 0;
}
