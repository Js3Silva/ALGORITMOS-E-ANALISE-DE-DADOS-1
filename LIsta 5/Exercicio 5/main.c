#include <stdio.h>
#include <stdlib.h>

double soma (int n);
double fatorial(int n);
int main()
{
    int n;

    printf("Digite o valor que deseja:\n");
    scanf("%d", &n);

    if(n > 0)
        printf("O valor de S e: %.3lf", soma(n));

    else
        printf("Digite um valor positivo!\n");

    return 0;
}


double soma (int n){

    if(n == 1)
        return 1;

    else
        return 1/fatorial(n) + soma(n-1);

}

double fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    else
        return n * fatorial(n - 1);
}
