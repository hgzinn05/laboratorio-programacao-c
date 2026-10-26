#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char categoria[20];
    char copiaNome[50];
    char descricao[100];

    printf("Digite o nome do produto: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    fgets(categoria, sizeof(categoria), stdin);
    categoria[strcspn(categoria, "\n")] = '\0';

    int tamanho = strlen(nome);

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("\nCategoria identificada: componente de hardware.\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("\nCategoria identificada: periférico.\n");
    } else {
        printf("\nCategoria inválida! Informe HARDWARE ou PERIFERICO.\n");
        return 1;
    }

    strcpy(copiaNome, nome);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copiaNome);

    printf("\n===== RESUMO DO CADASTRO =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres do nome: %d\n", tamanho);
    printf("Categoria: %s\n", categoria);
    printf("Descrição para o estoque: %s\n", descricao);

    return 0;
}