#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

     // Simulação do movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    printf("Iniciando o movimento em 'L' (2 casas para baixo e 1 para a esquerda):\n");
    for (int passo_vertical = 0; passo_vertical < 2; passo_vertical++) {
        printf("Baixo\n");
    }
    int passo_horizontal = 0;
    while (passo_horizontal < 1) {
        printf("Esquerda\n");
        passo_horizontal++;
    }
    printf("\nMovimento do Cavalo (simulação passo a passo do 'L'):\n");
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }
        int k = 0;
        while (k < 1) {
            printf("Esquerda\n");
            k++;
        }
    }

    return 0;
}
