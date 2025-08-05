#include <stdio.h>

int main() {
	int vendas[4][3];
	int i,j;
	int total = 0;
	
	for (i = 0; i < 4; i ++){
		for (j = 0; j < 3; j ++){
			printf("Digite os valores de vendas de cada regiao %d no trimestre %d: ", i + 1, j + 1);
			scanf("%d", &vendas[i][j]);
		}
	}
	for (i = 0; i < 4; i ++){
		for(j = 0; j < 3; j ++){
			total += vendas[i][j];
		}
		printf("Total de vendas da regiao %d: %d\n", i + 1, total);
	}
	
	return 0;
}
