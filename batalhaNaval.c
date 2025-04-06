#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio 1: vertical (coluna 2)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][2] = 3;
    }

    // Navio 2: horizontal (linha 5)
    for (int j = 4; j < 8; j++) {
        tabuleiro[5][j] = 3;
    }

    // Navio 3: diagonal principal (↘)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 4: diagonal secundária (↙)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibe o tabuleiro completo
    printf("Tabuleiro 10x10 com navios:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
