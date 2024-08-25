#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("Digite um valor:\n");
    scanf("%d", &num);

    printf("A soma dos digitos e  igual a %d \n", soma(num));
    return 0;
}


int soma(int num){

    if (num<10)
        return num;

    else
        return num%10 + soma(num/10);

}
