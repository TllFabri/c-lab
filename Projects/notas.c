#include <stdio.h>

int main() {
    float notas[5][3];
    float soma, media;
    int i, j;
    int aprovados = 0;

    float maiorNota = -1.0;
    int alunoMaiorNota = -1;
    int disciplinaMaiorNota = -1;

    // Leitura das notas
    for (i = 0; i < 5; i++) {
        printf("Digite as 3 notas do Aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);

            // Verifica se é a maior nota individual
            if (notas[i][j] > maiorNota) {
                maiorNota = notas[i][j];
                alunoMaiorNota = i;
                disciplinaMaiorNota = j;
            }
        }
    }

    printf("\n--- Médias dos Alunos ---\n");

    // Cálculo da média e contagem de aprovados
    for (i = 0; i < 5; i++) {
        soma = 0.0;
        for (j = 0; j < 3; j++) {
            soma += notas[i][j];
        }
        media = soma / 3.0;
        printf("Aluno %d: Média = %.2f\n", i + 1, media);
        if (media >= 7.0) {
            aprovados++;
        }
    }

    // Exibe total de aprovados
    printf("\nTotal de alunos aprovados: %d\n", aprovados);

    // Exibe notas do aluno com a maior nota individual
    printf("\n--- Aluno com Maior Nota Individual ---\n");
    printf("Aluno %d teve a maior nota: %.2f na Disciplina %d\n",
           alunoMaiorNota + 1, maiorNota, disciplinaMaiorNota + 1);

    printf("Notas do Aluno %d: ", alunoMaiorNota + 1);
    for (j = 0; j < 3; j++) {
        printf("%.2f ", notas[alunoMaiorNota][j]);
    }
    printf("\n");

    return 0;
}
