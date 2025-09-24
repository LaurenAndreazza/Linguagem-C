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

/* Operações aritméticas básicas:
- + (adição)
- - (subtração)
- * (multiplicação)
- / (divisão)
- % (módulo)

*/

 /* Passos do meu código em C
1. Incluir bibliotecas -> #include <stdio.h>
2. Declarar a função principal -> int main()
4. Finalizar todas as tarefas com ponto e vírgula ;
5. Retornar 0 -> return 0;
 
 
 */



#include <stdio.h> /* Biblioteca padrão de entrada e saída */

int main() /* Função principal do programa */
{
    float num1 = 5;   
    float num2 = 2;

    float divisão = num2 / num1; 


    printf("A divisão de %i por %i é igual a %f\n", num1, num2, divisão);
    

    return 0; // Indica que o programa terminou com sucesso
}

