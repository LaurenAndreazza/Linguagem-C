#include <stdio.h>
#include <math.h>

double calculaPotencia(double base, int expoente) {
    return pow(base, expoente);
}

int main() {
    double base, resultado;
    int expoente;

    printf("--- Calculadora de Potencia ---\n");
    printf("Digite o numero base: ");
    scanf("%lf", &base);
    printf("Digite o expoente (inteiro): ");
    scanf("%d", &expoente);

    resultado = calculaPotencia(base, expoente);

    printf("%.2f elevado a %d eh: %.2f\n", base, expoente, resultado);

    return 0;
}