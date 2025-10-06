#include <stdio.h>

int main() {

    // -------------------------------------------------------------
    // MOVIMENTANDO AS PEÇAS DO XADREZ
    // -------------------------------------------------------------
    // Cada peça usará uma estrutura de repetição diferente
    // Torre -> for
    // Bispo -> while
    // Rainha -> do-while
    // Cavalo -> loops aninhados (for + while)
    // -------------------------------------------------------------

    // =============================================================
    // 1️⃣ TORRE – Movimento em linha reta (5 casas para a direita)
    // =============================================================

    int movimentoTorre = 5;

    printf("--- Movimento da Torre ---\n\n");

    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Linha em branco separando os movimentos
    printf("\n");

    // =============================================================
    // 2️⃣ BISPO – Movimento na diagonal (5 casas para cima e direita)
    // =============================================================

    int movimentoBispo = 5;
    int contadorBispo = 0;

    printf("--- Movimento do Bispo ---\n\n");

    while (contadorBispo < movimentoBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // =============================================================
    // 3️⃣ RAINHA – Movimento em linha reta (8 casas para a esquerda)
    // =============================================================

    int movimentoRainha = 8;
    int contadorRainha = 0;

    printf("--- Movimento da Rainha ---\n\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    printf("\n");

    // =============================================================
    // 4️⃣ CAVALO – Movimento em "L" (2 casas para baixo e 1 para a esquerda)
    // =============================================================
    // Requisitos:
    // - Utilizar loops aninhados (um for e um while)
    // - Imprimir: "Baixo", "Baixo", "Esquerda"
    // =============================================================

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("--- Movimento do Cavalo ---\n\n");

    // Loop externo (for): movimento para baixo
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while): movimento para a esquerda
    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    printf("\n");

    // -------------------------------------------------------------
    // FIM DO PROGRAMA
    // -------------------------------------------------------------
    printf("Todos os movimentos foram concluídos com sucesso!\n");

    return 0;
}
