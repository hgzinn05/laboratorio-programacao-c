#include <stdio.h>
#include <string.h>

typedef struct {
char nome[100];
int idade;
float salario;
} Funcionario;

int main() {
Funcionario funcionario1, funcionario2;

// Cadastro do primeiro funcionário
printf("Digite o nome do primeiro funcionario: ");
fgets(funcionario1.nome, sizeof(funcionario1.nome), stdin);
funcionario1.nome[strcspn(funcionario1.nome, "\n")] = '\0';

printf("Digite a idade do primeiro funcionario: ");
scanf("%d", &funcionario1.idade);

printf("Digite o salario do primeiro funcionario: R$ ");
scanf("%f", &funcionario1.salario);

getchar(); // Limpa o ENTER

// Cadastro do segundo funcionário
printf("\nDigite o nome do segundo funcionario: ");
fgets(funcionario2.nome, sizeof(funcionario2.nome), stdin);
funcionario2.nome[strcspn(funcionario2.nome, "\n")] = '\0';

printf("Digite a idade do segundo funcionario: ");
scanf("%d", &funcionario2.idade);

printf("Digite o salario do segundo funcionario: R$ ");
scanf("%f", &funcionario2.salario);

// Apresentação dos dados
printf("\n===== DADOS DOS FUNCIONARIOS =====\n");

printf("\nFuncionario 1:\n");
printf("Nome: %s\n", funcionario1.nome);
printf("Idade: %d anos\n", funcionario1.idade);
printf("Salario: R$ %.2f\n", funcionario1.salario);

printf("\nFuncionario 2:\n");
printf("Nome: %s\n", funcionario2.nome);
printf("Idade: %d anos\n", funcionario2.idade);
printf("Salario: R$ %.2f\n", funcionario2.salario);

// Comparação dos salários
printf("\n===== COMPARACAO SALARIAL =====\n");

if (funcionario1.salario > funcionario2.salario) {
float diferenca = funcionario1.salario - funcionario2.salario;

printf("O funcionario com maior salario e: %s\n", funcionario1.nome);
printf("Diferenca salarial: R$ %.2f\n", diferenca);

} else if (funcionario2.salario > funcionario1.salario) {
float diferenca = funcionario2.salario - funcionario1.salario;

printf("O funcionario com maior salario e: %s\n", funcionario2.nome);
printf("Diferenca salarial: R$ %.2f\n", diferenca);

} else {
printf("Os dois funcionarios recebem o mesmo salario.\n");
}

return 0;
}