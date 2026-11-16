
#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Resultado depois de dobrar: %d\n", valor);

    return 0;
}
