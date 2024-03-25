#include <stdio.h>
#include <stdlib.h>

void main()
{
    int soma;

    do{
       soma += 1;

       if (soma%5 == 0)         //Imprime os numeros multiplos de 5 infinitamente
        printf("%d \n", soma);
    }while(1);

    return 0;
}



/**********************************************************************************

RESOLUÇÃO EXERCICIO 11 - MAIS DUAS FORMAS DE RESOLVER - TOTAL 3

FOR:

void main()
{
    int soma;

    for(;;)
    {
       soma += 1;

       if (soma%5 == 0)         //Imprime os numeros multiplos de 5 infinitamente
        printf("%d \n", soma);
    }

    return 0;
}
***********************************************************************************
WHILE:

void main()
{
    int soma;

    while(1)
    {
       soma += 1;

       if (soma%5 == 0)         //Imprime os numeros multiplos de 5 infinitamente
        printf("%d \n", soma);
    }

    return 0;
}
***********************************************************************************
DO WHILE:

void main()
{
    int soma;

    do{
       soma += 1;

       if (soma%5 == 0)         //Imprime os numeros multiplos de 5 infinitamente
        printf("%d \n", soma);
    }while(1);

    return 0;
}

***********************************************************************************/
