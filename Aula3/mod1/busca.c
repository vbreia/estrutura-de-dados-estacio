#include <stdio.h>

#define TAMANHO 10  // Definição do tamanho máximo da lista

// Estrutura para representar um elemento da lista
typedef struct {
    int chave;
    int valor; // Pode conter outros dados além da chave
} Elemento;

// Função de busca sequencial
int buscar(Elemento lista[], int n, int chave) {
    for (int i = 0; i < n; i++) { // Percorre a lista do início ao fim
        if (lista[i].chave == chave) { // Se a chave for encontrada
            return i; // Retorna a posição do elemento
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    // Exemplo de lista com 5 elementos
    Elemento lista[TAMANHO] = {
        {10, 100},
        {20, 200},
        {30, 300},
        {40, 400},
        {50, 500}
    };

    int chave_busca = 50; // Chave que queremos encontrar
    int posicao = buscar(lista, 5, chave_busca); // Chamada da função

    if (posicao != -1) {
        printf("\n\tElemento de chave [ %d ] com valor [ %d ] encontrado na posição [ %d ].\n\n",lista[posicao].chave, lista[posicao].valor, posicao);

    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
