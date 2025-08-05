#include <stdio.h>

int main() {
    // 4 residências x 3 meses
    float consumo[4][3];

    // Variáveis auxiliares
    float soma;
    float media;
    float maiorConsumo = 0.0;
    int residenciaPico = 0, mesPico = 0;
    float limite;
    int contadorAcimaLimite = 0;

    // Entrada dos dados
    for (int i = 0; i < 4; i++) {
        printf("Digite o consumo (em litros) da Residência %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  Mês %d: ", j + 1);
            scanf("%f", &consumo[i][j]);

            // Verifica se é o maior consumo registrado
            if (consumo[i][j] > maiorConsumo) {
                maiorConsumo = consumo[i][j];
                residenciaPico = i;
                mesPico = j;
            }
        }
    }

    printf("\n--- MÉDIA DE CONSUMO POR RESIDÊNCIA ---\n");
    for (int i = 0; i < 4; i++) {
        soma = 0.0;
        for (int j = 0; j < 3; j++) {
            soma += consumo[i][j];
        }
        media = soma / 3.0;
        printf("Residência %d: %.2f litros\n", i + 1, media);
    }

    printf("\nMaior consumo registrado: %.2f litros\n", maiorConsumo);
    printf("Registrado na Residência %d, Mês %d\n", residenciaPico + 1, mesPico + 1);

    // Verificação por limite
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

