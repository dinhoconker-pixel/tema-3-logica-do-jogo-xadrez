#include <stdio.h>

#define TAM 8

void inicializarTabuleiro(char tabuleiro[TAM][TAM]) {
    int i, j;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = '.';
        }
    }

    tabuleiro[0][0] = 'T';
    tabuleiro[0][1] = 'C';
    tabuleiro[0][2] = 'B';
    tabuleiro[0][3] = 'R';
    tabuleiro[0][4] = 'Q';
}

void mostrarTabuleiro(char tabuleiro[TAM][TAM]) {
    int i, j;

    printf("\nTabuleiro:\n\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {

    char tabuleiro[TAM][TAM];
    int turno = 1;

    inicializarTabuleiro(tabuleiro);
    mostrarTabuleiro(tabuleiro);

    printf("\nJogo iniciado!\n");

    if (turno == 1) {
        printf("Turno do jogador 1\n");
    } else {
        printf("Turno do jogador 2\n");
    }

    return 0;
}
