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

// Função de inserção (insere um novo elemento se a chave não existir)
int inserir(Elemento lista[], int *n, Elemento novo_elemento) {
    if (*n >= TAMANHO) {
        return -1; // Lista cheia
    }

    if (buscar(lista, *n, novo_elemento.chave) == -1) { // Verifica se a chave já existe
        lista[*n] = novo_elemento; // Insere na próxima posição disponível
        (*n)++; // Atualiza o número de elementos na lista
        return 1; // Inserção bem-sucedida
    }
    return -1; // Chave duplicada, inserção falhou
}

int main() {
    Elemento lista[TAMANHO]; // Vetor para armazenar os elementos da lista
    int n = 0; // Número atual de elementos na lista

    // Inserindo elementos na lista
    Elemento novo1 = {10, 100};
    Elemento novo2 = {20, 200};
    Elemento novo3 = {30, 300};

    inserir(lista, &n, novo1);
    inserir(lista, &n, novo2);
    inserir(lista, &n, novo3);

    // Tentando inserir um elemento com chave repetida
    Elemento novo4 = {40, 400};
    int resultado = inserir(lista, &n, novo4);

    if (resultado == 1) {
        printf("Elemento %d inserido com sucesso.\n", novo4.chave);
    } else {
        printf("Erro: Chave duplicada ou lista cheia.\n");
    }

    return 0;
}
