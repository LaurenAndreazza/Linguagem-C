//Opções de comentários: /* */  ou  //
// \ barra invertida + barra normal
// \n = nova linha

/* Variáveis: tipos básicos

int - números inteiros
float - números com ponto flutuante (números reais)
double - números com ponto flutuante de dupla precisão
char - caracteres (letras, dígitos, símbolos)
void - tipo vazio (sem valor)

Como chamar dentro de uma string: 
- %d ou %i (int), 
- %f (float), 
- %lf (double), 
- %c (char)

*/

#include <stdio.h> /* Biblioteca padrão de entrada e saída */

int main() /* Função principal do programa */
{
    int idadeMae = 50; // Declaração de uma variável do tipo inteiro chamada 'idadeMae'
    int idadePai = 55; // Declaração de uma variável do tipo inteiro chamada 'idadePai'
    int idadeIrmao = 25; // Declaração de uma variável do tipo inteiro

printf("Idade da mae: %i\nIdade do pai: %i\nIdade do irmao: %i\n", idadeIrmao, idadePai, idadeMae); 
// Imprime as idades na tela - é MUITO IMPORTANTE COLOCAR AS VARIAVEIS EM ORDEM, POIS O PROGRAMA VAI LER NA ORDEM QUE FOR COLOCADO

    return 0; // Indica que o programa terminou com sucesso
}

