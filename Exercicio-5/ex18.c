#include <stdio.h>

int somaDoisNumeros(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, soma;

    printf("--- Soma de Dois Numeros ---\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    soma = somaDoisNumeros(num1, num2);

    printf("A soma de %d + %d eh: %d\n", num1, num2, soma);

    return 0;
}
