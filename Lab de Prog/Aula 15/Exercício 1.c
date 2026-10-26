#include <stdio.h>

int main(void) {
    int matriz[2][3];
    int soma = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nMatriz lida:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma de todos os elementos: %d\n", soma);
    return 0;
}