# include <stdio.h>
int main(){
    float temp[3][4], maior = 0, tempLimite;
    int contador = 0;
 
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 4; coluna ++){
            printf("\nDigite a temperatura da cidade %d, Mes %d: ", linha+1, coluna+1);
            scanf("%f",&temp[linha][coluna]);
        }
    }
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 4; coluna ++){
            if(maior < temp[linha][coluna])
                maior = temp[linha][coluna];
        }
        printf("\nA temperatura mais alta na Cidade %d foi: %.1f", linha+1, maior);
        maior = 0;
    }
    printf("\nTemp limite: ");
    scanf("%f", &tempLimite);
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 4; coluna ++){
            if(temp[linha][coluna] > tempLimite)
                contador++;
        }
    }
    printf("Total de meses com temperatura acima de %.2f C: %d", tempLimite, contador);
    return 0;
}