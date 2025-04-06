#include <stdio.h>

// Exibe qualquer matriz com 0 (não afetado) e 1 (afetado)
void exibirMatriz(int matriz[5][5], const char* nome) {
    printf("\nHabilidade: %s\n", nome);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Cone (formato em pirâmide invertida)
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    // Cruz
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1; // linha do meio
        cruz[i][2] = 1; // coluna do meio
    }

    // Octaedro (diamante)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 1) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Exibir os padrões
    exibirMatriz(cone, "Cone");
    exibirMatriz(cruz, "Cruz");
    exibirMatriz(octaedro, "Octaedro");

    return 0;
}
