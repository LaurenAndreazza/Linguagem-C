*/Preencher um vetor A de 10 elementos (índices de 0 a 9) com os números inteiros 10,20,30,40,50,..., 100. Escrever o vetor A após o seu total preenchimento. 


#include <stdio.h>

// Define o tamanho do vetor para facilitar a manutenção
#define TAMANHO 10

int main() {
    // Declara o vetor 'A' com 10 posições
    int A[TAMANHO];
    int i;

    // (i + 1) garante que a sequência comece em 10 (1*10) e vá até 100 (10*10)
    for (i = 0; i < TAMANHO; i++) {
        A[i] = (i + 1) * 10;
    }

    printf("Vetor A preenchido:\n");

    // Loop para percorrer e imprimir cada elemento do vetor
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}