#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, elemento = 1;

    printf("Digite o numero de elementos que voce quer que apareca na tela: \n");
    scanf("%d", &n);

    for(int i = 0; i < n ;i++){
        //Imprime o valor na tela do usuario se forem divisíveis por três e (múltiplos de cinco ou divisíveis por sete
        if(elemento%3 == 0 && (elemento%5 == 0 || elemento%7 == 0))
        printf("%d ", elemento);

        elemento += 2;
    }

    return 0;
}

