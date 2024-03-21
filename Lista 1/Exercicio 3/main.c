#include <stdio.h>


int main() {

  int numero, centena, dezena, unidade, numero_invertido;

  printf("Digite um numero que contenha 3 digitos: ");
  scanf("%d", &numero);

  centena = numero / 100;           //divide por 100 para achar a unidade da centena.
  unidade = numero % 10;            //resto da divisão por 10.
  dezena = (numero%100)/10;         //resto da divisão por 100, dividido por 10.
  numero_invertido = unidade * 100 + dezena * 10 + centena;

  printf("O numero invertido e: %d", numero_invertido);

  return 0;
}
