#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Definição de um ponteiro para inteiro
    int numero = 10;
    int *ponteiroInt = &numero; // Ponteiro para um inteiro

    // Exibindo o valor e o endereço de memória da variável 'numero' usando ponteiros
    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", &numero);
    printf("Valor de numero usando ponteiro: %d\n", *ponteiroInt);

    // Alterando o valor da variável 'numero' usando ponteiros
    *ponteiroInt = 20;
    printf("Novo valor de numero após modificação pelo ponteiro: %d\n", numero);

    // Caracteristicas especificas de ponteiros
    // Alocação dinâmica de memória com malloc
    int *ponteiroDinamico = (int *)malloc(sizeof(int)); // Aloca memória para um inteiro

    // Verifica se a alocação foi bem sucedida
    if (ponteiroDinamico == NULL)
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    // Inicializando o valor alocado dinamicamente e exibindo
    *ponteiroDinamico = 30;
    printf("Valor armazenado na memória alocado dinamicamente: %d\n", *ponteiroDinamico);

    // Uso correto dos ponteiros na programação
    // Exemplo de uso seguro de ponteiros com verificação de liberação de memória
    free(ponteiroDinamico);  // Libera a memória alocada dinamicamente
    ponteiroDinamico = NULL; // Define o ponteiro como NULL após liberar a memória

    // Testando o ponteiro após liberar a memória
    if (ponteiroDinamico == NULL)
    {
        printf("O ponteiro foi liberado com sucesso\n");
    }

    return 0;
}
