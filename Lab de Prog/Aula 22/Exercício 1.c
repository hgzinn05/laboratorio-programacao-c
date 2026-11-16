
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nValor digitado: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void*)&numero);

    return 0;
}
