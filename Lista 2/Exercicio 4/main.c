#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    if (x < 0){
        y = (x*2)+4;
        printf("O VALOR DE Y E: %f", y);
    }
    else if(x > 0){
        y = (x*3)-3;
        printf("O VALOR DE Y E: %f", y);
    }
    else if(x == 0)
        printf("ERRO");

    return 0;
}
