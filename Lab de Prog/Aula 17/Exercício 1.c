#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];

    printf("Digite o seu primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite o perfil de acesso (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    int tamanho = strlen(nome);

    int perfilValido = 1;
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("\nPerfil identificado: administrador.\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("\nPerfil identificado: usuário comum.\n");
    } else {
        perfilValido = 0;
        printf("\nPerfil inválido! Informe ADMIN ou COMUM.\n");
        return 1;
    }

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, nome);
    strcat(mensagem, "! Seu acesso foi registrado como ");
    strcat(mensagem, perfil);
    strcat(mensagem, ".");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres do nome: %d\n", tamanho);
    printf("Perfil de acesso: %s\n", perfil);
    printf("Confirmação do nome: %s\n", confirmacao);
    printf("\n%s\n", mensagem);

    return 0;
}