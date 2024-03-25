#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,elemento = 1,A,B;

    printf("Digite o numero de elementos que voce quer que apareca na tela: \n");
    scanf("%d", &n);
    printf("Digite o valor de A (tem que ser menor que B): \n");
    scanf("%d", &A);
    printf("Digite o valor de B (tem que ser maior que A): \n");
    scanf("%d", &B);

    for(int i = 0; i < n ;i++){
        //Imprime o valor na tela do usuario que está entre A e B
        if( elemento > A && elemento < B)
        if(elemento%3 == 0 && (elemento%5 == 0 || elemento%7 == 0))  //Imprime o valor na tela do usuario se forem divisíveis por três e (múltiplos de cinco ou divisíveis por sete
            printf("%d ", elemento);

        elemento += 2;
    }

    return 0;
}
