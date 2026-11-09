
#include <stdio.h>

double maiorPreco(double preco1, double preco2) {
    if (preco1 > preco2) {
        return preco1;
    } else {
        return preco2;
    }
}

int main() {
    double preco1, preco2, maior;

    printf("===== COMPARADOR DE PRECOS =====\n");

    printf("\nPreco 1: R$ ");
    scanf("%lf", &preco1);

    printf("Preco 2: R$ ");
    scanf("%lf", &preco2);

    if (preco1 == preco2) {
        printf("\nOs dois precos sao iguais!\n");
    } else {
        maior = maiorPreco(preco1, preco2);

        printf("\nMaior preco: R$ %.2lf\n", maior);
    }

    return 0;
}
