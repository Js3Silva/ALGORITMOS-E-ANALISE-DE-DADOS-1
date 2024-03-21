// Essa linha é um comentário, pois começa com '//' (barra-barra)

/*
Esta linha
e esta linha também são comentários, pois estão cercadas por
*/

// a linha a seguir diz ao compilador para incluir o arquivo stdio.h
#include <stdio.h>

// a linha a seguir define o método main
int main() {
  //----------------------------------------------------------------------
  // Solução do Exercício 1
  //----------------------------------------------------------------------
  // para ler 2 inteiros do teclado, preciso ter onde armazená-los e para tal
  // preciso declarar variáveis do tipo inteiro, como segue:
  int a, b;

  // para recebermos valores do teclado, precisamos orientar o usuário sobre o
  // que ele deve informar. Para tal, usamos a função printf, que imprime uma
  // mensagem na tela:
  printf("Digite dois numeros inteiros: ");

  // a leitura de valores do teclado é feita com a função scanf, que recebe como
  // parâmetro o tipo de dado que será lido e o endereço da variável que
  // receberá o valor lido. O & faz menção ao endereço da variável, como segue:
  scanf("%i", &a);
  scanf("%i", &b);

  // o resultado da soma dos dois valores inteiros pode ser a)armazenado em uma
  // outra variável, b) pode ser armazenado em uma das variáveis já declaradas
  // ou ainda c) pode ser exibido na tela diretamente, sem armazená-lo em uma
  // variável, como segue:

  // a)
  int soma = a + b;
  printf("a) O valor da soma e: %i", soma);

  // b)
  //a = a + b;
  //printf("b) O valor da soma é: %i", a);

  // c)
  //printf("c) O valor da soma é: %i", a + b);

  //----------------------------------------------------------------------

  return (0);
}
