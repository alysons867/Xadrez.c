#include <stdio.h>

int main() {
    // Movimento da TORRE usando for
    // Movimento: 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do BISPO usando while
    // Movimento: 5 casas na diagonal para cima e à direita
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Movimento da RAINHA usando do-while
    // Movimento: 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
    printf("\n");

    return 0;
}
