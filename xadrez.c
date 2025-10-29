#include <stdio.h>

// Função da Torre
void moverTorre(int casas) {
    printf("Movimento da TORRE:\n");
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Função do Bispo
void moverBispo(int casas) {
    printf("Movimento do BISPO:\n");
    for (int i = 0; i < casas; i++) {
        printf("Cima, Direita\n");
    }
    printf("\n");
}

// Função da Rainha
void moverRainha(int casas) {
    printf("Movimento da RAINHA:\n");
    for (int i = 0; i < casas; i++) {
        printf("Esquerda\n");
    }
    printf("\n");
}

// NOVO: Função do Cavalo
void moverCavalo(int movimentos) {
    printf("Movimento do CAVALO:\n");
    for (int i = 0; i < movimentos; i++) {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    moverTorre(casasTorre);
    moverBispo(casasBispo);
    moverRainha(casasRainha);
    moverCavalo(movimentosCavalo);

    printf("Simulação finalizada!\n");
    return 0;
}


