#include <stdio.h>

int main() {
    // Definindo o número de casas para cada movimento
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    
    // Movimento do Cavalo
    int movimento_baixo = 2; 
    int movimento_esquerda = 1;

    // Movimento da Torre usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo usando while
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha usando do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);

    // Movimento do Cavalo usando loops aninhados (for + while)
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");

    int passo_baixo = 0;  // Contador para casas para baixo

    // Loop for controla o número de vezes que se movimenta para a esquerda (1 vez)
    for (int i = 0; i < movimento_esquerda; i++) {
        passo_baixo = 0;

        // Loop while controla o movimento para baixo (2 casas)
        while (passo_baixo < movimento_baixo) {
            printf("Baixo\n");
            passo_baixo++;
        }

        // Após descer 2 casas, mover uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
