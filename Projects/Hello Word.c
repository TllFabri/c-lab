#include <stdio.h>

int main() {
	int idade = 20;
	float altura = 1.75;
	char nota = 6.5;
	char opcao;
	int i = 0;
	
	
	printf("Hello Word!\n");
	
	if(idade >= 18 && altura > 1.70){
		printf("Aprovado\n");
		
	}
	
	if (nota >= 7){
		printf("Passou");
	}
	
	if (nota >= 5){
		printf("Recuperação");
	}
	
	else{
		printf("Reprovado!");
	}
	
	switch (opcao) {
    case 1:
        printf("Cadastrar");
        break;
    case 2:
        printf("Sair");
        break;
    default:
        printf("Opção inválida");
	}
	while (i < 5) {
    printf("%d\n", i);
    i++;
}
	for(int j = 0; j < 5; j++) {
    printf("%d\n", j);
	}


	
	return 0;
	
}

