#include <stdio.h>

int main() {
    float notas[5][4]; // 5 alunos, 4 disciplinas
    float media;
    int i, j;
    int aprovados = 0;
    float limite;
    int acimaDoLimite = 0;

    // Leitura das notas
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Digite a nota da disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Cálculo da média e contagem de aprovados
    for (i = 0; i < 5; i++) {
        media = 0;
        for (j = 0; j < 4; j++) {
            media += notas[i][j];
        }
        media /= 4.0;

        printf("Média do Aluno %d: %.2f - %s\n", i + 1, media, (media >= 7.0 ? "Aprovado" : "Reprovado"));

        if (media >= 7.0) {
            aprovados++;
        }
    }

    // Verificação com valor-limite
    printf("\nDigite uma nota-limite para comparar: ");
    scanf("%f", &limite);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (notas[i][j] > limite) {
                acimaDoLimite++;
            }
        }
    }

    // Exibição final
    printf("\nTotal de alunos aprovados: %d\n", aprovados);
    printf("Quantidade de notas acima de %.2f: %d\n", limite, acimaDoLimite);

    return 0;
}

