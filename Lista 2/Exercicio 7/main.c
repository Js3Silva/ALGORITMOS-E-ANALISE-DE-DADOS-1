#include <stdio.h>
#include <stdlib.h>

void main()
{
int numero, digito1, digito2, digito4, digito5;

    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &numero);

    digito1 = numero / 10000;                   // Primeiro d�gito
    digito2 = (numero / 1000) % 10;             // Segundo d�gito
    digito4 = (numero / 10) % 10;               // Quarto d�gito
    digito5 = numero % 10;                      // Quinto d�gito

    if (digito1 == digito5 && digito2 == digito4)
        printf("%d e um numero palindromo.\n", numero);

    else
        printf("%d nao e um numero palindromo.\n", numero);

    return 0;
}
