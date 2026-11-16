
#include <stdio.h>

int main() {
    int numero = 20;
    int *ponteiro;

    ponteiro = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", (void*)&numero);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
