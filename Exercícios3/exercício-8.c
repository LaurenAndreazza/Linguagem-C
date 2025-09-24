

#include <stdio.h>

#define TAMANHO 10

int main() {
    int X[TAMANHO];
    int Y[TAMANHO];
    int i;

    // Solicita ao usuário que insira os 10 valores do vetor X
    printf("Digite os 10 elementos do vetor X:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &X[i]);
    }

    // Processa os vetores conforme a regra
    for (i = 0; i < TAMANHO; i++) {
        // Verifica se o índice 'i' é par
        if (i % 2 == 0) {
            // Se for par, multiplica o elemento correspondente de X por 2
            Y[i] = X[i] * 2;
        } else {
            // Se for ímpar, multiplica o elemento correspondente de X por 3
            Y[i] = X[i] * 3;
        }
    }

    // Imprime o vetor Y resultante
    printf("\nVetor Y resultante:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", Y[i]);
    }
    printf("\n");

    return 0;
}

/* Ler um vetor X de 10 elementos. Crie um vetor Y da seguinte forma. Os elementos de ordem par de Y (índices 0,2,4,6,8) receberão os respectivos elementos de X multiplicados por 2. Os elementos de ordem ímpar de Y (índices 1,3,5,7,9) receberão os respectivos elementos de X multiplicados por 3. Escrever o vetor Y */