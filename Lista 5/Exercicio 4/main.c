#include <stdio.h>
#include <stdlib.h>

int resto(int num, int den);
int main()
{
    int num = 0, den = 0;

    printf("Digite um numero inteiro para descobrir o resto da divisão\n");
    scanf("%d %d", &num, &den);

    printf("O resto da divisão e igual a %d\n", resto(num, den));
    return 0;
}

int resto(int num, int den){

    if (num < den)
        return num;

    else
        return resto(num - den, den);

}
