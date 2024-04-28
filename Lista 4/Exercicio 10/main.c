#include <stdio.h>
#include <stdlib.h>

char categoria(int idade);
int main()
{
    int idade;

    printf("Digite a idade do nadador:\n");
    scanf("%d", &idade);

    printf("A categoria do atleta e: %c", categoria(idade));
    return 0;
}

char categoria(int idade){

    char categoria;

    if (idade >= 5 && idade <= 7){
        categoria = 'F';
        return categoria;
    }

    else if(idade >= 8 && idade <= 10){
        categoria = 'E';
        return categoria;
    }

    else if(idade >= 11 && idade <= 13){
        categoria = 'D';
        return categoria;
    }

    else if(idade >= 14 && idade <= 15){
        categoria = 'C';
        return categoria;
    }

    else if(idade >= 16 && idade <= 17){
        categoria = 'B';
        return categoria;
    }

        else if(idade > 18){
        categoria = 'A';
        return categoria;
    }
    else
      return 0;
}
