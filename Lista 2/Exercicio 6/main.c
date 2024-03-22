#include <stdio.h>
#include <stdlib.h>

void main()
{
    int X,Y,Z;

    printf("Digite o valor inteiro de X,Y e Z respectivamente: \n");
    scanf("%d" "%d" "%d", &X, &Y, &Z);

    if (X%Y == 0 && X%Z == 0)                       //Se o resto da divisao por Y e Z for igual a 0
        printf("O numero e divisivel por Y e Z");

    else if (X%Y != 0 && X%Z == 0)                  //Se o resto da divisao por Z for igual a 0
        printf("O numero e divisivel por Z, mas nao por Y");

    else if (X%Z != 0 && X%Y == 0)                  //Se o resto da divisao por Y for igual a 0
        printf("O numero e divisivel por Y, mas nao por Z");

    else if (X%Z != 0 && X%Y != 0)                  //Se o resto da divisao por Y e Z for diferente de 0
        printf("O numero nao e divisivel por Y e nem por Z");

    return 0;
}
