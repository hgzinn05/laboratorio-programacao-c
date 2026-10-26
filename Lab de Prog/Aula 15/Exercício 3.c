#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int pares = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("\nQuantidade de valores pares: %d\n", pares);
    return 0;
}