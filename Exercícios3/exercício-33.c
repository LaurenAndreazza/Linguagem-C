/*Ler um vetor W[1..15] e imprimi-lo na ordem inversa à da leitura. Achar seu menor elemento e dizer quantas vezes ele ocorre no vetor, e em que posições.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h> 

int main() {
    int W[15];
    int i;
    int menorElemento = INT_MAX;
    int contadorOcorrencias = 0;

    srand(time(NULL));

    printf("Vetor W na ordem de leitura:\n");
    for (i = 0; i < 15; i++) {
        W[i] = rand() % 50; // Preenche com números aleatórios de 0 a 49
        printf("%d ", W[i]);
    }
    printf("\n\n");

    printf("Vetor W na ordem inversa:\n");
    for (i = 14; i >= 0; i--) {
        printf("%d ", W[i]);
    }
    printf("\n\n");

    for (i = 0; i < 15; i++) {
        if (W[i] < menorElemento) {
            menorElemento = W[i];
        }
    }
    printf("Menor elemento encontrado: %d\n", menorElemento);

    printf("O menor elemento ocorre nas seguintes posicoes (indices):\n");
    for (i = 0; i < 15; i++) {
        if (W[i] == menorElemento) {
            contadorOcorrencias++;
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Numero total de ocorrencias: %d\n", contadorOcorrencias);

    return 0;
}