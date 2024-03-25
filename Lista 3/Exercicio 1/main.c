#include <stdio.h>
#include <stdlib.h>

void main() {

    int n, op;
    float numero, soma = 0;

    do{
    printf("Digite a quantidade de numeros a serem somados: "); //Quantidade de numeros que serão somados
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {                   //Deixa o usuário escolher a quantidade de numeros descritos para a soma
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &numero);
        soma += numero;                             //Executa a soma até atingir o numero de somas determinado pelo usuario
    }

    printf("A soma dos %d numeros e: %.2f\n", n, soma);
    printf("Deseja fazer novamente? Tecle [1] para SIM e [0] para nao: ");      //Deixa a opção do usuario refazer as somas
    scanf("%d", &op);
    }while(op==1);

    return 0;
}
