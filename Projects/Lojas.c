#include <stdio.h>

int main (){
	float lojas [4][5];
	int i, j;
	
	for (i = 0; i < 4; i ++){
		for (j = 0; i < 4; i ++){
			printf("Digite o faturamento da loja %d no mes %d: ", i + 1, j + 1);
			scanf("%f", &lojas[i][j]);
		}
	}
	
	for (i = 0; i < 4; i ++){
		float maior = lojas[i][0];
		for (j = 1; j < 5; j ++){
			if (lojas[j][j] > maior){
				maior = lojas[i][j];
			}
		}
		printf("Maior faturamento da Loja %d: R$ %.2f\n", i + 1, maior);
	}
	float meta;
	int count = 0;
	
	printf("\nDigite a meta de faturamento mensal: R$ ");
	scanf("%f", &meta);
	
	for (i = 0; i < 4; i ++){
		for (j = 0; j < 5; j ++){
			if (lojas[i][j] > meta){
				count ++;
			}
		}
	}
	printf("Total de meses com faturamento acima de R$ %.2f foi: %d meses\n", meta, count);
		
	return 0;
}
