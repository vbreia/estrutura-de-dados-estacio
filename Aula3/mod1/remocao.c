#include <stdio.h>

#define TAMANHO 10  // Definição do tamanho máximo da lista

// Estrutura para representar um elemento da lista
typedef struct {
    int chave;
    int valor; // Pode conter outros dados além da chave
} Elemento;

// Função de busca sequencial (retorna a posição do elemento ou -1 se não encontrado)
int buscar(Elemento lista[], int n, int chave) {
    for (int i = 0; i < n; i++) { 
        if (lista[i].chave == chave) { 
            return i; // Retorna a posição do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

// Função de remoção (remove um elemento e reorganiza a lista)
int remover(Elemento lista[], int *n, int chave) {
    if (*n == 0) {
        printf("Erro: Lista vazia.\n");
        return -1; // Lista vazia
    }

    int i = buscar(lista, *n, chave); // Busca a posição do elemento
    if (i == -1) {
        return -1; // Elemento não encontrado
    }

    // Desloca todos os elementos seguintes para a esquerda
    for (int j = i; j < *n - 1; j++) {
        lista[j] = lista[j + 1];
    }
    
    (*n)--; // Reduz o número de elementos
    return 1; // Remoção bem-sucedida
}

int main() {
    Elemento lista[TAMANHO] = {
        {10, 100},
        {20, 200},
        {30, 300},
        {40, 400},
        {50, 500}
    };
    int n = 5; // Número atual de elementos na lista

    // Removendo um elemento existente
    int chave_remover = 30;
    int resultado = remover(lista, &n, chave_remover);

    if (resultado == 1) {
        printf("Elemento [ %d ] removido com sucesso.\n", chave_remover);
    } else {
        printf("Erro: Elemento não encontrado.\n");
    }

    return 0;
}
