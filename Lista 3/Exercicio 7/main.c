#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, elemento = 1;

    printf("Digite o numero de elementos que voce quer que apareca na tela: \n");
    scanf("%d", &n);

    for(int i = 0; i < n ;i++){
        printf("%d ", elemento);         //Imprime o valor na tela do usuario
        elemento += 2;
    }

    return 0;
}
