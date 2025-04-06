#include <stdio.h>

int main() {
    // Tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Posiciona um navio verticalmente (coluna 1, linhas 0 a 3)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][1] = 3;
    }

    // Posiciona um navio horizontalmente (linha 4, colunas 1 a 4)
    for (int j = 1; j < 5; j++) {
        tabuleiro[4][j] = 3;
    }

    // Exibe as coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("Navio em: (%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
