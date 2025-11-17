#include <stdio.h>

double mediaQuatroNotas(double n1, double n2, double n3, double n4) {
    return (n1 + n2 + n3 + n4) / 4.0;
}

int main() {
    double nota1, nota2, nota3, nota4, media;

    printf("--- Calculadora de Media (4 notas) ---\n");
    printf("Digite a nota 1: ");
    scanf("%lf", &nota1);
    printf("Digite a nota 2: ");
    scanf("%lf", &nota2);
    printf("Digite a nota 3: ");
    scanf("%lf", &nota3);
    printf("Digite a nota 4: ");
    scanf("%lf", &nota4);

    media = mediaQuatroNotas(nota1, nota2, nota3, nota4);

    printf("A media das notas eh: %.2f\n", media);

    return 0;
}