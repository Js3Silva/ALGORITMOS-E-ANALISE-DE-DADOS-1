#include <stdio.h>
#include <stdlib.h>

void main()
{
    float numero1, numero2, resultado;

    printf("DIGITE DOIS NUMEROS PARA A DIVISAO: \n");
    scanf("%f" "%f", &numero1, &numero2);

    if (numero2 != 0){                      //Se o segundo numero for diferente de 0
        resultado = numero1/numero2;
        printf("O RESULTADO DA DIVIDAO E: %.2f", resultado);
    }
    else if(numero2 == 0)                   //Se o segundo numero for 0
        printf("ERRO, DIGITE UMA DIVISAO VALIDA!");

    return 0;
}
