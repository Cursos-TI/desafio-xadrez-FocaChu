#include <stdio.h>

int main() {

    // Variável auxiliar
    int i; 
    
    printf("\n");

    // Torre: Move-se 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");

    //loop de movimento
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Bispo: Move-se 5 casas na diagonal usando WHILE
    printf("Movimento do Bispo:\n");

    // Reinicializa o contador
    i = 0; 

    //loop de movimento
    while(i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // Rainha: Move-se 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da Rainha:\n");

    // Reinicializa o contador
    i = 0; 

    //loop de movimento
    do {
        printf("Esquerda\n");
        i++;
    } while(i < 8);

    return 0;
}