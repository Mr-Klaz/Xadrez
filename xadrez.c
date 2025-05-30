
#include <stdio.h>

// ----------------------
// Nível Novato
// ----------------------

// Movimento da Torre com loop for (5 casas à direita)
void moverTorre() {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Movimento do Bispo com loop while (5 casas na diagonal superior-direita)
void moverBispo() {
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
}

// Movimento da Rainha com loop do-while (8 casas à esquerda)
void moverRainha() {
    printf("Movimento da Rainha:\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    printf("\n");
}


// Movimento do Cavalo com loops aninhados (2 para baixo, 1 para esquerda)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        int j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
    }
    printf("\n");
}

// Torre com recursividade
void moverTorreRec(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreRec(passos - 1);
}

// Rainha com recursividade
void moverRainhaRec(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainhaRec(passos - 1);
}

// Bispo com recursividade
void moverBispoRec(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRec(passos - 1);
}

// Cavalo com loops aninhados complexos (2 para cima, 1 para direita)
void moverCavaloAvancado() {
    printf("Movimento do Cavalo (Avançado):\n");
    for (int i = 2; i > 0; i--) {
        printf("Cima\n");
        for (int j = 1; j > 0; j--) {
            if (i == 1 && j == 1) {
                printf("Direita\n");
                break;
            }
        }
    }
    printf("\n");
}

// Função Principal


int main() {
    // Nível Novato
    moverTorre();
    moverBispo();
    moverRainha();

    // Nível Aventureiro
    moverCavalo();

    // Nível Mestre
    moverTorreRec(5);
    printf("\n");
    moverBispoRec(5);
    printf("\n");
    moverRainhaRec(8);
    printf("\n");
    moverCavaloAvancado();

    return 0;
}
