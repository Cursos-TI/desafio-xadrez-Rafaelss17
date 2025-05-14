#include <stdio.h>

// Definição de constantes para os movimentos das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Bloco de código para avaliação de limites com loops

    printf("=========================================\n");
    printf("     Desafio de Xadrez - MateCheck\n");
    printf("=========================================\n");
    printf("     Avaliação de Limites com Loops\n");
    printf("=========================================\n\n");

    // Entrada de dados (definidos diretamente nas variáveis)
    const int limite_bispo = MOVIMENTO_BISPO;
    const int limite_torre = MOVIMENTO_TORRE;
    const int limite_rainha = MOVIMENTO_RAINHA;

    printf("--- Teste de Movimentação do Bispo ---\n");
    printf("Limite de movimento do Bispo definido para: %d casas na diagonal.\n", limite_bispo);
    printf("Simulando movimentação:\n");

    // Utilizando a estrutura de repetição 'while' para o Bispo
    int casas_movidas_bispo = 0;
    while (casas_movidas_bispo < limite_bispo) {
        printf("Diagonal Superior Direita\n");
        casas_movidas_bispo++;
    }
    printf("O Bispo tentou mover-se por %d casas na diagonal superior direita.\n\n", casas_movidas_bispo);

    printf("--- Teste de Movimentação da Torre ---\n");
    printf("Limite de movimento da Torre definido para: %d casas para a direita.\n", limite_torre);
    printf("Simulando movimentação:\n");

    // Utilizando a estrutura de repetição 'for' para a Torre
    for (int casas_movidas_torre = 0; casas_movidas_torre < limite_torre; casas_movidas_torre++) {
        printf("Direita\n");
    }
    printf("A Torre tentou mover-se por %d casas para a direita.\n\n", casas_movidas_torre);

    printf("--- Teste de Movimentação da Rainha ---\n");
    printf("Limite de movimento da Rainha definido para: %d casas para a esquerda.\n", limite_rainha);
    printf("Simulando movimentação:\n");

    // Utilizando a estrutura de repetição 'do-while' para a Rainha
    int casas_movidas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_movidas_rainha++;
    } while (casas_movidas_rainha < limite_rainha);
    printf("A Rainha tentou mover-se por %d casas para a esquerda.\n\n", casas_movidas_rainha);

    printf("=========================================\n");
    printf("     Fim da Avaliação de Limites\n");
    printf("=========================================\n");

    return 0;
}
