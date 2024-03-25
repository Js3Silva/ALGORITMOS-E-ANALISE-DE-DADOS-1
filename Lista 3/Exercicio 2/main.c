#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, primeiro = 0, segundo = 1, proximo;

    printf("Digite quantos elementos da serie de Fibonacci que voce deseja imprimir: ");    //limita o programa a mostrar o resultado de acordo com o usuário
    scanf("%d", &n);

    printf("Os %d primeiros elementos da serie de Fibonacci sao:\n", n);

    for (int i = 0; i < n; i++) {                   //enquanto i for menor que n, será feita o loop
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;           //Próximo recebe o valor dos dois numeros
            primeiro = segundo;                     //Primeiro passa a receber o valor do segundo
            segundo = proximo;                      //Segundo passa a receber o valor do proximo
        }
        printf("%d ", proximo);
    }

    return 0;
}
