#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, primeiro = 0, segundo = 1, proximo;

    printf("Digite um numero qualquer: ");    //limita o programa a mostrar resultado menores que N
    scanf("%d", &n);

    printf("Os elementos da serie de Fibonacci menores que %d sao:\n", n);

    for (int i = 0; i < n; i++) {                   //enquanto i for menor que n, será feita o loop
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;           //Próximo recebe o valor dos dois numeros
            primeiro = segundo;                     //Primeiro passa a receber o valor do segundo
            segundo = proximo;                      //Segundo passa a receber o valor do proximo
        }
        if(proximo < n && proximo > 0)              //Imprime se o valor for menor que n
        printf("%d \n", proximo);
    }

    return 0;
}
