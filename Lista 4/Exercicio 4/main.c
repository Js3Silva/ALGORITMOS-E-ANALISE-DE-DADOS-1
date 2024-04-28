#include <stdio.h>
#include <stdlib.h>

verificaTriangulo(float X, float Y, float Z){

if(X < Y+Z && Y < X+Z && Z < Y+X){
    if( X == Y && Y == Z && Z == X)
        printf("Triangulo Equilatero\n");

    else if (X == Y || Y == Z || Z == X)
        printf("Triangulo Isosceles\n");

    else if( X != Y && Y != Z && Z != X)
        printf("Triangulo Escaleno\n");
    }
    else
        printf("Nao pode ser um triangulo!");
}

int main()
{
    float X, Y, Z;

    printf("Digite o valor de X:\n");
    scanf("%f", &X);
    printf("Digite o valor de Y:\n");
    scanf("%f", &Y);
    printf("Digite o valor de Z:\n");
    scanf("%f", &Z);
    verificaTriangulo(X, Y, Z);
    return 0;
}
