#include <stdio.h>

void analisaDadosPopulacao() {
    int numFilhos = 0, totalPessoas = 0, contSalario2000 = 0;
    double salario = 0, somaSalarios = 0, somaFilhos = 0, maiorSalario = 0;
    double mediaSalarios = 0, mediaFilhos = 0, percSalario2000 = 0;

    printf("--- Pesquisa da Prefeitura ---\n");
    printf("Digite o salario (ou um valor negativo para parar): ");
    scanf("%lf", &salario);

    if (salario < 0) {
        printf("Nenhum dado inserido.\n");
        return;
    }

    while (salario >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        totalPessoas++;
        somaSalarios += salario;
        somaFilhos += numFilhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 2000.00) {
            contSalario2000++;
        }

        printf("\nDigite o salario (ou um valor negativo para parar): ");
        scanf("%lf", &salario);
    }

    if (totalPessoas > 0) {
        mediaSalarios = somaSalarios / totalPessoas;
        mediaFilhos = somaFilhos / totalPessoas;
        percSalario2000 = ((double)contSalario2000 / totalPessoas) * 100.0;

        printf("\n--- Resultados da Pesquisa ---\n");
        printf("Total de pessoas entrevistadas: %d\n", totalPessoas);
        printf("Media de salario da populacao: R$ %.2f\n", mediaSalarios);
        printf("Media do numero de filhos: %.1f\n", mediaFilhos);
        printf("Maior salario: R$ %.2f\n", maiorSalario);
        printf("Percentual com salario ate R$ 2000,00: %.1f%%\n", percSalario2000);
    }
}

int main() {
    analisaDadosPopulacao();
    return 0;
}
