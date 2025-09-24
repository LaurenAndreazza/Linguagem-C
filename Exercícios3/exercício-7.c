/*Escreva um algoritmo que leia um vetor de 50 posições de números inteiros e mostre somente os positivos com suas respectivas posições*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[50];
    int i;

    srand(time(NULL));
    printf("Vetor original (para fins de teste):\n");
    for (i = 0; i < 50; i++) {
        vetor[i] = rand() % 100 - 50;
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    // Mostra os números positivos e suas posições
    printf("Numeros positivos encontrados no vetor:\n");
    for (i = 0; i < 50; i++) {
        if (vetor[i] > 0) {
            printf("Valor: %d na Posicao (indice): %d\n", vetor[i], i);
        }
    }

    return 0;
}

