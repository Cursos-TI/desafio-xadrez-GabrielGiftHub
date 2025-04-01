#include <stdio.h>

/**
 * Função recursiva para simular o movimento da Torre
 * @param casas Número de casas restantes a serem percorridas
 */
void moverTorre(int casas) {
    // Caso base: quando não há mais casas para percorrer
    if (casas <= 0) {
        return;
    }
    
    // Movimento para a direita
    printf("Direita\n");
    
    // Chamada recursiva para a próxima casa
    moverTorre(casas - 1);
}

/**
 * Função recursiva para simular o movimento da Rainha
 * @param casas Número de casas restantes a serem percorridas
 */
void moverRainha(int casas) {
    // Caso base: quando não há mais casas para percorrer
    if (casas <= 0) {
        return;
    }
    
    // Movimento para a esquerda
    printf("Esquerda\n");
    
    // Chamada recursiva para a próxima casa
    moverRainha(casas - 1);
}

/**
 * Função para simular o movimento do Bispo usando loops aninhados
 * @param casas Número de casas a serem percorridas na diagonal
 */
void moverBispo(int casas) {
    // Loops aninhados para movimentação na diagonal
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {  // Loop interno executado apenas uma vez por casa
            printf("Cima, Direita\n");
        }
    }
}

/**
 * Função para simular o movimento do Cavalo em L
 */
void moverCavalo() {
    int passos = 3;  // Total de passos para formar o movimento em L
    int vertical = 0;
    int horizontal = 0;
    
    // Loop com condições múltiplas para simular o movimento em L
    for (int i = 1; i <= passos; i++) {
        // Primeiros dois passos são para cima
        if (i <= 2) {
            printf("Cima\n");
            vertical++;
            continue;  // Pula para a próxima iteração
        }
        
        // O último passo é para a direita
        printf("Direita\n");
        horizontal++;
        break;  // Encerra o loop após o movimento completo
    }
    
    printf("Movimento em L completo: %d casas para cima e %d casa para a direita\n", 
           vertical, horizontal);
}

/**
 * Função principal
 */
int main() {
    // Número de casas a serem percorridas por cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    
    printf("=== Simulação Avançada de Movimentos no Xadrez ===\n\n");
    
    // Movimento da Torre usando função recursiva
    printf("Movimento da Torre (5 casas para a direita - recursivo):\n");
    moverTorre(casasTorre);
    printf("\n");
    
    // Movimento do Bispo usando loops aninhados
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita - loops aninhados):\n");
    moverBispo(casasBispo);
    printf("\n");
    
    // Movimento da Rainha usando função recursiva
    printf("Movimento da Rainha (8 casas para a esquerda - recursivo):\n");
    moverRainha(casasRainha);
    printf("\n");
    
    // Movimento do Cavalo em L com loops e condições múltiplas
    printf("Movimento do Cavalo (movimento em L para cima à direita):\n");
    moverCavalo();
    
    return 0;
}