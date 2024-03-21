#include <stdio.h>

int main() {
    int dia, mes, ano;
    long segundos;

    // Solicita a entrada do usu�rio
    printf("Digite a data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Calcula os segundos de diferen�a
    segundos = (ano - 1970) * 365 * 24 * 60 * 60 + (mes - 1) * 30 * 24 * 60 * 60 + (dia - 1) * 24 * 60 * 60;

    // Imprime o resultado
    printf("Diferen�a em segundos desde 01/01/1970: %ld segundos\n", segundos);

    return 0;
}
