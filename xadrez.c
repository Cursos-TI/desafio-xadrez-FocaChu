#include <stdio.h>

// Função para a Torre
void mover_torre(int n) {
    if(n > 0) {
        printf("Direita\n");
        mover_torre(n-1);
    }
}

// Função para a Rainha 
void mover_rainha(int n) {
    if(n > 0) {
        printf("Esquerda\n");
        mover_rainha(n-1);
    }
}

// Função para o Bispo 
void mover_bispo(int n) {
    if(n > 0) {
        printf("Cima, Direita\n");
        mover_bispo(n-1);
    }
}

// Movimento do Cavalo em L 
void mover_cavalo() {
    // Loop aninhado com variáveis múltiplas
    for(int i = 0, j = 0; i < 2; i++) {
        while(j < 3) {
            if(i == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
            j++;
            if(j == 2 && i == 1) break; 
        }
        j = 0;
    }
}

int main() {
    printf("=== MOVIMENTO DAS PEÇAS ===\n\n");
    
    printf("Bispo (5 casas diagonal direita cima):\n");
    mover_bispo(5);
    printf("\n");
    
    printf("Torre (5 casas direita):\n");
    mover_torre(5);
    printf("\n");
    
    printf("Rainha (8 casas esquerda):\n");
    mover_rainha(8);
    printf("\n");
    
    printf("Cavalo (L cima direita):\n");
    mover_cavalo();
    printf("\n");
    
    return 0;
}