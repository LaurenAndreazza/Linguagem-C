/*Escreva um algoritmo que leia um vetor de 100 posições e mostre-o ordenado em ordem crescente. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // troca os elementos
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int vetor[100];
    int i;

    srand(time(NULL));
    printf("Vetor original (amostra dos 10 primeiros elementos):\n");
    for (i = 0; i < 100; i++) {
        vetor[i] = rand() % 1000;
        if(i < 10) printf("%d ", vetor[i]);
    }
    printf("...\n\n");

    bubbleSort(vetor, 100);

    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}