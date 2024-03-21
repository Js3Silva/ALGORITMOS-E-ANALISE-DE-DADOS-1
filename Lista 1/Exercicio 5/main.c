#include <stdio.h>
#include <stdlib.h>

int main() {
    int conta_bancaria, c = 0, d = 0, m = 0, u = 0, digito_ver, soma_mult, soma, inverte;

    printf("Digite sua conta bancaria com tres digitos: \n");
    scanf("%d", &conta_bancaria);

    c = conta_bancaria / 100;               //Separando as unidades de medida
    d = (conta_bancaria / 10) % 10;
    u = conta_bancaria % 10;

    inverte = (u * 100) + (d * 10) + c;
    soma = conta_bancaria + inverte;        // Invertendo os dígitos para soma

    m = 0;
    c = soma / 100;
    d = ((soma / 10) % 10) * 2;
    u = (soma % 10) * 3;                    // Calculando o dígito verificador

    soma_mult = m + c + d + u;              // Soma dos produtos dos dígitos pelas posições
    digito_ver = soma_mult % 10;

    printf("O digito verificador e: %d\n", digito_ver);

    return 0;
}
