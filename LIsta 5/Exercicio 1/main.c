#include <stdio.h>
#include <stdlib.h>

int count(int numero);
int main()
{
    int numero;

    printf("Digite um digito:\n");
    scanf("%d", &numero);

    printf("O numero apresenta %d digitos", count(numero));
    return 0;
}

int count(int numero){

    if(numero==0)
        return 0;

    else
        return 1 + count(numero/10);
}
