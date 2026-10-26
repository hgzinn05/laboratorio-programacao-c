#include <stdio.h>

int main(void) {
    int matriz[2][2] = {
        {10, 20},
        {30, 40}
    };

    printf("+------+------+\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("| %4d ", matriz[i][j]);
        }
        printf("|\n");
        printf("+------+------+\n");
    }

    return 0;
}