#include <stdio.h>

/*
    Nível Mestre - Movimentando as peças do xadrez
    -------------------------------------------------
    - Torre, Bispo e Rainha: agora usam recursividade
    - Cavalo: loops aninhados e múltiplas condições
*/

// TORRE (recursiva)
void moverTorreRecursiva(int casas, int atual) {
    if (atual == casas) return; // condição de parada
    printf("Direita\n");
    moverTorreRecursiva(casas, atual + 1); // chamada recursiva
}

// BISPO (recursiva + loops aninhados)
void moverBispoRecursivo(int casas, int atual) {
    if (atual == casas) return;
    
    for (int i = 0; i < 1; i++) { // loop vertical
        for (int j = 0; j < 1; j++) { // loop horizontal
            printf("Cima, Direita\n");
        }
    }
    moverBispoRecursivo(casas, atual + 1);
}

// RAINHA (recursiva)
void moverRainhaRecursiva(int casas, int atual) {
    if (atual == casas) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(casas, atual + 1);
}

// CAVALO (loops aninhados e múltiplas condições)
void moverCavaloAvancado() {
    printf("Movimento do CAVALO:\n");
    int movimentos = 0;

    for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
        if (i == 2 && j == 1) {
            printf("Direita\n");
            break;
        }

        if (i < 2) {
            printf("Cima\n");
            continue;
        }
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da TORRE:\n");
    moverTorreRecursiva(casasTorre, 0);
    printf("\n");

    printf("Movimento do BISPO:\n");
    moverBispoRecursivo(casasBispo, 0);
    printf("\n");

    printf("Movimento da RAINHA:\n");
    moverRainhaRecursiva(casasRainha, 0);
    printf("\n");

    moverCavaloAvancado();

    printf("Simulação finalizada!\n");
    return 0;
}



