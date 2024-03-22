#include <stdio.h>
#include <stdlib.h>

int main()
{   float temperatura;

    printf("Digite a temperatura qua a agua se encontra: \n");
    scanf("%f", &temperatura);

    if (temperatura >= 100)
        printf("A agua esta no estado gasoso \n");

    else if (temperatura >= 0 && temperatura < 100)
        printf("A agua esta no estado liquido \n");

    else  if (temperatura < 0)
        printf("A agua esta no estado solido \n");

    return 0;

}
