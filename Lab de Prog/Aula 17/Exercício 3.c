#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigo[10];
    char copiaNome[50];
    char curso[40];
    char mensagem[100];

    printf("Digite o seu primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite o código do curso (CC ou SI): ");
    scanf("%9s", codigo);

    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciência da Computação");
    } else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informação");
    } else {
        printf("\nCódigo de curso inválido! Informe CC ou SI.\n");
        return 1;
    }

    int tamanho = strlen(nome);

    strcpy(copiaNome, nome);

    strcpy(mensagem, "Olá, ");
    strcat(mensagem, copiaNome);
    strcat(mensagem, "!");

    printf("\n===== DADOS DO ESTUDANTE =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres do nome: %d\n", tamanho);
    printf("Curso: %s\n", curso);
    printf("Mensagem: %s\n", mensagem);

    return 0;
}