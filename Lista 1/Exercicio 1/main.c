// Essa linha � um coment�rio, pois come�a com '//' (barra-barra)

/*
Esta linha
e esta linha tamb�m s�o coment�rios, pois est�o cercadas por
*/

// a linha a seguir diz ao compilador para incluir o arquivo stdio.h
#include <stdio.h>

// a linha a seguir define o m�todo main
int main() {
  //----------------------------------------------------------------------
  // Solu��o do Exerc�cio 1
  //----------------------------------------------------------------------
  // para ler 2 inteiros do teclado, preciso ter onde armazen�-los e para tal
  // preciso declarar vari�veis do tipo inteiro, como segue:
  int a, b;

  // para recebermos valores do teclado, precisamos orientar o usu�rio sobre o
  // que ele deve informar. Para tal, usamos a fun��o printf, que imprime uma
  // mensagem na tela:
  printf("Digite dois numeros inteiros: ");

  // a leitura de valores do teclado � feita com a fun��o scanf, que recebe como
  // par�metro o tipo de dado que ser� lido e o endere�o da vari�vel que
  // receber� o valor lido. O & faz men��o ao endere�o da vari�vel, como segue:
  scanf("%i", &a);
  scanf("%i", &b);

  // o resultado da soma dos dois valores inteiros pode ser a)armazenado em uma
  // outra vari�vel, b) pode ser armazenado em uma das vari�veis j� declaradas
  // ou ainda c) pode ser exibido na tela diretamente, sem armazen�-lo em uma
  // vari�vel, como segue:

  // a)
  int soma = a + b;
  printf("a) O valor da soma e: %i", soma);

  // b)
  //a = a + b;
  //printf("b) O valor da soma �: %i", a);

  // c)
  //printf("c) O valor da soma �: %i", a + b);

  //----------------------------------------------------------------------

  return (0);
}
