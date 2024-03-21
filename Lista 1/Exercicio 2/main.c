#include <stdio.h>

int main(void) {
  float salario; 
  
  printf("Digite seu salario: ");
  scanf("%f", &salario);
  
  //salario = salario/1412;

  printf("salario corresponde a %f salarios minimos", salario/1412);
  return 0;
}