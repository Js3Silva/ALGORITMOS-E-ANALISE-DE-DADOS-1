#include <stdio.h>

double media(int alunos);
int main() {
    int alunos;
    printf("Digite o numero de alunos: ");
    scanf("%d", &alunos);

    float media_aprovados = media(alunos);

    printf("A media das notas dos alunos aprovados e: %.2f\n", media_aprovados);

    return 0;
}

double media(int alunos) {

    int contador_aprovados = 0;
    double soma = 0;

    for (int i = 0; i < alunos; i++) {
        float nota;
        printf("Digite a nota do %d aluno: ", i + 1);
        scanf("%f", &nota);

        if (nota >= 6) {
            soma += nota;
            contador_aprovados++;
        }
    }

    if (contador_aprovados == 0) {
        printf("Nenhum aluno foi aprovado.\n");
        return 0;
    } else
        return soma / contador_aprovados;

}
