#include <stdio.h>

void verificaTriangulo(double x, double y, double z) {

    if (x < (y + z) && y < (x + z) && z < (x + y)) {
        
        if (x == y && y == z) {
            printf("Os lados formam um Triangulo Equilatero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os lados formam um Triangulo Isosceles.\n");
        } else {
            printf("Os lados formam um Triangulo Escaleno.\n");
        }

    } else {
        printf("Os valores fornecidos NAO podem formar um triangulo.\n");
    }
}

int main() {
    double lado1, lado2, lado3;

    printf("--- Verificador de Triangulo ---\n");
    printf("Digite o comprimento do lado 1: ");
    scanf("%lf", &lado1);
    printf("Digite o comprimento do lado 2: ");
    scanf("%lf", &lado2);
    printf("Digite o comprimento do lado 3: ");
    scanf("%lf", &lado3);

    verificaTriangulo(lado1, lado2, lado3);

    return 0;
}
