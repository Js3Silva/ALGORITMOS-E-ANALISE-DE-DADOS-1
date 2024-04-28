#include <stdio.h>
#include <stdlib.h>

void media_salarial(float media_salario, int quantidade){

    float media = media_salario/quantidade;

    printf("A media salarial da populacao e de R$ %.2f .", media);
}


int main()
{
    float salario, media_salario;
    int filhos, op = 0, quantidade = 0;

    do{
    printf("Informe o salario:\n");
    scanf("%f", &salario);

    printf("Informe o numero de filhos:\n");
    scanf("%d", &filhos);

    printf("Deseja inserir mais dados?\n");
    printf("[1]SIM\n[2]NAO\n");
    scanf("%d", &op);

    media_salario = media_salario + salario;
    quantidade++;

    }while (op == 1);

    media_salarial(media_salario, quantidade);

    return 0;
}
