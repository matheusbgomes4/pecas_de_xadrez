#include <stdio.h>

int main() {
    // ==============================
    // NÍVEL NOVATO – TORRE, BISPO, RAINHA
    // ==============================

    // TORRE -> 5 casas à direita (FOR)
    int casas_torre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // BISPO -> 5 casas diagonal cima-direita (WHILE)
    int casas_bispo = 5;
    int contador_bispo = 1;
    printf("Movimento do BISPO:\n");
    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // RAINHA -> 8 casas à esquerda (DO-WHILE)
    int casas_rainha = 8;
    int contador_rainha = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    printf("\nSimulação finalizada!\n");
    return 0;
}

