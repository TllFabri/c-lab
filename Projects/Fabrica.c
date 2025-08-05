#include <stdio.h>

int main (){
    int producao[5][3];
    int i, j;

    for (i = 0; i < 5; i ++){
        for (j = 0; i < 3; i ++){
            printf("Informe a quantidade de undades produzidas pela fabrica %d no mês %d: ", i + 1, j + 1);
            scanf("%d", &producao[i][j]);
        }
    }
    printf("\n--- Maior produção por fábrica ---\n");

    for (i = 0; i < 5; i ++){
        int maior = producao[i][0];
        int mesMaior = 1;

        for(j = 1; j < 3; j ++){
            if (producao[i][j] > maior){
                maior = producao[i][j];
                mesMaior = j + 1;
            }
        }
    }
    printf("Fábrica %d teve maior produção no mês %d com %d unidades\n",i + 1, mesMaior, maior);

    return 0;
}