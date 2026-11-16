
#include <stdio.h>

int main() {
    int numeros[5];
    int *ponteiro;
    int i;

    ponteiro = numeros;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros armazenados no vetor:\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i));
    }

    return 0;
}
