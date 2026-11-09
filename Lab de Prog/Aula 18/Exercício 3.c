
#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero, resultado;

    printf("===== VERIFICADOR DE NUMEROS =====\n");

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    resultado = verificarPar(numero);

    if (resultado == 1) {
        printf("\nO numero %d e par.\n", numero);
    } else {
        printf("\nO numero %d e impar.\n", numero);
    }

    return 0;
}
