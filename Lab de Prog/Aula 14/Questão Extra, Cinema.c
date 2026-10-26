#include <stdio.h>

int main(void) {
    int assentos[5][8] = {0};   

    assentos[1][2] = 1;        

    for (int i = 0; i < 5; i++) {
        printf("Fileira %d: ", i + 1);
        for (int j = 0; j < 8; j++) {
            printf("%d ", assentos[i][j]);
        }
        printf("\n");
    }

    return 0;
}