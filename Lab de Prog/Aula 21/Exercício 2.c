
#include <stdio.h>

int main() {
    FILE *arquivo;
    int numeros[5];
    int i;
    int numero;

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);

        fprintf(arquivo, "%d\n", numeros[i]);
    }

    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!");
        return 1;
    }

    printf("\nNumeros armazenados no arquivo:\n");

    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

    return 0;
}
