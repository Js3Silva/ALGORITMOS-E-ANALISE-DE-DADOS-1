// Essa linha é um comentário, pois começa com '//' (barra-barra)

/*
Esta linha
e esta linha também são comentários, pois estão cercadas por
*/

// a linha a seguir diz ao compilador para incluir o arquivo stdio.h
#include <stdio.h>

// a linha a seguir define o método main
int main() {

  // CÓDIGO EXEMPLO PARA ENTRADAS E SAÍDAS
  int a;    // variável do tipo int de nome a
  char b;   // variável do tipo char de nome b
  float c;  // variável do tipo float de nome c
  double d; // variável do tipo double de nome d

  // leitura e impressão na tela de variável int
  printf("Insira um valor inteiro para a variável a: ");
  scanf("%d", &a);
  printf("O valor de a é: %d\n", a);
  getchar(); //usado para descartar o caractere de nova linha deixado no buffer
  
  // leitura e impressão na tela de variável char
  printf("Insira um caracter para a variável b: ");
  scanf("%c", &b);
  printf("O valor de b é: %c\n", b);
  getchar();
  
  // leitura e impressão na tela de variável float
  printf("Insira um valor real para a variável c: ");
  scanf("%f", &c);
  printf("O valor de c é: %f\n", c);
  printf("O valor de c com precisão de 3 casas decimais é: %.3f\n", c);
  getchar();

  return (0);
}