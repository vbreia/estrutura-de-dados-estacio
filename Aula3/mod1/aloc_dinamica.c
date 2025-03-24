#include <stdio.h>
#include <stdlib.h>

// Estrutura para um elemento da lista
typedef struct {
    int chave;
    int valor;
} Elemento;

// Função para buscar a posição onde o elemento deve ser inserido (busca binária)
int buscarPosicao(Elemento lista[], int n, int chave) {
    int inicio = 0, fim = n - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (lista[meio].chave == chave)
            return meio; // Elemento já existe

        if (lista[meio].chave < chave)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return inicio; // Retorna posição onde deve ser inserido
}

// Função para inserir um elemento em uma lista ordenada
Elemento* inserir(Elemento *lista, int *n, int chave, int valor) {
    // Aloca espaço adicional para o novo elemento
    lista = (Elemento*) realloc(lista, (*n + 1) * sizeof(Elemento));

    if (lista == NULL) {
        printf("Erro de alocação de memória.\n");
        return NULL;
    }

    int pos = buscarPosicao(lista, *n, chave);

    // Desloca os elementos para abrir espaço para o novo
    for (int i = *n; i > pos; i--) {
        lista[i] = lista[i - 1];
    }

    // Insere o novo elemento na posição correta
    lista[pos].chave = chave;
    lista[pos].valor = valor;
    (*n)++;

    return lista;
}

// Função para exibir a lista ordenada
void exibirLista(Elemento *lista, int n) {
    for (int i = 0; i < n; i++) {
        printf("Chave: %d, Valor: %d\n", lista[i].chave, lista[i].valor);
    }
    printf("\n");
}

int main() {
    Elemento *lista = NULL; // Ponteiro para lista
    int n = 0; // Número de elementos na lista

    // Inserindo elementos de forma ordenada
    lista = inserir(lista, &n, 50, 500);
    lista = inserir(lista, &n, 30, 300);
    lista = inserir(lista, &n, 70, 700);
    lista = inserir(lista, &n, 40, 400);

    // Exibindo a lista
    printf("Lista ordenada:\n");
    exibirLista(lista, n);

    // Liberando memória
    free(lista);

    return 0;
}
