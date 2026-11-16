
#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario funcionarios[5];
    int i;

    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("\nCadastro do funcionario %d\n", i + 1);

        printf("Digite o nome: ");
        scanf(" %[^\n]", funcionarios[i].nome);

        printf("Digite o salario: ");
        scanf("%f", &funcionarios[i].salario);

        printf("Digite as horas extras: ");
        scanf("%d", &funcionarios[i].horasExtras);

        fprintf(arquivo, "%s|%.2f|%d\n",
                funcionarios[i].nome,
                funcionarios[i].salario,
                funcionarios[i].horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!");
        return 1;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");

    while (fscanf(arquivo, "%49[^|]|%f|%d\n",
                  funcionarios[0].nome,
                  &funcionarios[0].salario,
                  &funcionarios[0].horasExtras) == 3) {

        printf("\nNome: %s\n", funcionarios[0].nome);
        printf("Salario: R$ %.2f\n",
               funcionarios[0].salario);
        printf("Horas extras: %d\n",
               funcionarios[0].horasExtras);
    }

    fclose(arquivo);

    return 0;
}
