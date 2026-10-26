#include <stdio.h>

int main(void) {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
    }

    printf("Nome completo: %s\n", nome);
    return 0;
}