#include <stdio.h>

// Função recursiva para movimento da Torre (para a direita)
void moverTorre(int casas_restantes) {
    if (casas_restantes <= 0) return; // Caso base: sem casas restantes, para recursão
    printf("Direita\n");
    moverTorre(casas_restantes - 1);  // Chamada recursiva decrementando casas
}

// Função recursiva para o Bispo, que combina recursão e loops aninhados
// O Bispo se move diagonal para cima-direita (vertical + horizontal)
void moverBispo(int casas_verticais, int casas_horizontais) {
    if (casas_verticais <= 0) return; // Caso base da recursão

    // Loop interno para o movimento horizontal (direita)
    for (int i = 0; i < casas_horizontais; i++) {
        printf("Cima, Direita\n");
    }

    // Chamada recursiva diminuindo o movimento vertical
    moverBispo(casas_verticais - 1, casas_horizontais);
}

// Função recursiva para movimento da Rainha (para a esquerda)
void moverRainha(int casas_restantes) {
    if (casas_restantes <= 0) return; // Caso base da recursão
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1); // Chamada recursiva
}

// Função para simular o movimento do Cavalo usando loops aninhados complexos
// O movimento agora é 2 casas para cima + 1 para direita (em "L")
void moverCavalo(int movimento_cima, int movimento_direita) {
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    // Loop externo: controla as casas para a direita
    for (int dir = 0; dir < movimento_direita; dir++) {
        int cima_contador = 0;

        // Loop interno: movimento para cima, até 2 casas
        while (cima_contador < movimento_cima) {
            // Simulação: aqui podemos colocar condições para mostrar continue/break, por exemplo
            if (cima_contador == 1) {
                // Suponha que em meio ao movimento queremos pular uma casa (continue)
                cima_contador++;
                continue;
            }
            printf("Cima\n");
            cima_contador++;

            if (cima_contador > movimento_cima) {
                // Se passar do limite, interrompe (break)
                break;
            }
        }
        // Após mover para cima, mover para direita uma casa
        printf("Direita\n");
    }
}

int main() {
    // Número de casas para os movimentos
    int casas_torre = 5;
    int casas_bispo_vertical = 5;
    int casas_bispo_horizontal = 1; // Para cada movimento vertical, mover 1 casa na horizontal
    int casas_rainha = 8;
    int casas_cavalo_cima = 2;
    int casas_cavalo_direita = 1;

    // Movimento Torre - recursivo
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casas_torre);
    printf("\n");

    // Movimento Bispo - recursivo com loops aninhados
    printf("Movimento do Bispo (5 casas na diagonal cima-direita):\n");
    moverBispo(casas_bispo_vertical, casas_bispo_horizontal);
    printf("\n");

    // Movimento Rainha - recursivo
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casas_rainha);
    printf("\n");

    // Movimento Cavalo - loops aninhados complexos
    moverCavalo(casas_cavalo_cima, casas_cavalo_direita);

    return 0;
}
