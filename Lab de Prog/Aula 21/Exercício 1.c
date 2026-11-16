
#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    char matricula[20];
    int i;

    arquivo = fopen("funcionarios.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("\nCadastro do funcionario %d\n", i + 1);

        printf("Digite o nome: ");
        scanf(" %[^\n]", nome);

        printf("Digite a matricula: ");
        scanf("%s", matricula);

        fprintf(arquivo, "Nome: %s | Matricula: %s\n",
                nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso!\n");

    return 0;
}
