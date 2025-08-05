#include <stdio.h>

int main() {
    // 4 resid�ncias x 3 meses
    float consumo[4][3];

    // Vari�veis auxiliares
    float soma;
    float media;
    float maiorConsumo = 0.0;
    int residenciaPico = 0, mesPico = 0;
    float limite;
    int contadorAcimaLimite = 0;

    // Entrada dos dados
    for (int i = 0; i < 4; i++) {
        printf("Digite o consumo (em litros) da Resid�ncia %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  M�s %d: ", j + 1);
            scanf("%f", &consumo[i][j]);

            // Verifica se � o maior consumo registrado
            if (consumo[i][j] > maiorConsumo) {
                maiorConsumo = consumo[i][j];
                residenciaPico = i;
                mesPico = j;
            }
        }
    }

    printf("\n--- M�DIA DE CONSUMO POR RESID�NCIA ---\n");
    for (int i = 0; i < 4; i++) {
        soma = 0.0;
        for (int j = 0; j < 3; j++) {
            soma += consumo[i][j];
        }
        media = soma / 3.0;
        printf("Resid�ncia %d: %.2f litros\n", i + 1, media);
    }

    printf("\nMaior consumo registrado: %.2f litros\n", maiorConsumo);
    printf("Registrado na Resid�ncia %d, M�s %d\n", residenciaPico + 1, mesPico + 1);

    // Verifica��o por limite
    printf("\nDigite o valor de consumo limite: ");
    scanf("%f", &limite);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (consumo[i][j] > limite) {
                contadorAcimaLimite++;
            }
        }
    }

    printf("Total de registros com consumo acima de %.2f litros: %d\n", limite, contadorAcimaLimite);

    return 0;
}

