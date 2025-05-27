#include <stdio.h>

// --- Movimento da Torre (Recursivo) ---
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// --- Movimento do Bispo ---
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}


// --- Movimento da Rainha (Recursivo) ---
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

// --- Movimento do Cavalo (Loops Aninhados Complexos) ---
void moverCavaloLoopsComplexos() {
    printf("Movimento do Cavalo\n");
    for (int i = 0; i < 1; i++) { // Controla o movimento em 'L'
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
        }
        for (int direita = 0; direita < 1; direita++) {
            printf("Direita\n");
        }
    }

}

int main() {
    printf("--- Movimento da Torre  ---\n");
    moverTorreRecursivo(5);
    printf("\n");

    printf("--- Movimento do Bispo  ---\n");
    moverBispoRecursivo(5);
    printf("\n");

   
    printf("--- Movimento da Rainha  ---\n");
    moverRainhaRecursivo(8);
    printf("\n");

    printf("--- Movimento do Cavalo  ---\n");
    moverCavaloLoopsComplexos();

    return 0;
}