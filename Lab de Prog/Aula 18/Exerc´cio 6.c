
#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;
    int i;

    for (i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main() {
    int numero, resultado;

    printf("===== CALCULADORA DE FATORIAL =====\n");

    printf("\nDigite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 12) {

        resultado = calcularFatorial(numero);

        printf("\nFatorial de %d = %d\n", numero, resultado);

    } else {
        printf("\nNumero invalido! Digite um numero entre 0 e 12.\n");
    }

    return 0;
}
