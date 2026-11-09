
#include <stdio.h>

void exibirMenu() {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("\nEscolha uma opcao: ");
}

double somar(double n1, double n2) {
    return n1 + n2;
}

double subtrair(double n1, double n2) {
    return n1 - n2;
}

double multiplicar(double n1, double n2) {
    return n1 * n2;
}

double dividir(double n1, double n2) {
    return n1 / n2;
}

int main() {
    int opcao;
    double n1, n2, resultado;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {

            printf("\nPrimeiro numero: ");
            scanf("%lf", &n1);

            printf("Segundo numero: ");
            scanf("%lf", &n2);

            switch (opcao) {

                case 1:
                    resultado = somar(n1, n2);
                    printf("\nResultado: %.2lf\n", resultado);
                    break;

                case 2:
                    resultado = subtrair(n1, n2);
                    printf("\nResultado: %.2lf\n", resultado);
                    break;

                case 3:
                    resultado = multiplicar(n1, n2);
                    printf("\nResultado: %.2lf\n", resultado);
                    break;

                case 4:
                    if (n2 != 0) {
                        resultado = dividir(n1, n2);
                        printf("\nResultado: %.2lf\n", resultado);
                    } else {
                        printf("\nErro: nao e possivel dividir por zero!\n");
                    }
                    break;
            }

        } else if (opcao != 0) {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\nCalculadora encerrada!\n");

    return 0;
}
