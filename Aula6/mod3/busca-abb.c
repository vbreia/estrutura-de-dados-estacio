#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int chave;
    struct No *filho_esquerdo;
    struct No *filho_direito;
} No;

int busca_arvore(int chave, No *ptr) {
    if (ptr == NULL) {
        return 0; // chave não encontrada
    }

    if (ptr->chave == chave) {
        return 1; // chave encontrada
    } else if (chave < ptr->chave) {
        return busca_arvore(chave, ptr->filho_esquerdo);
    } else {
        return busca_arvore(chave, ptr->filho_direito);
    }
}

// Função auxiliar para criar um novo nó
No* cria_no(int chave) {
    No *novo_no = (No *)malloc(sizeof(No));
    novo_no->chave = chave;
    novo_no->filho_esquerdo = NULL;
    novo_no->filho_direito = NULL;
    return novo_no;
}

// Exemplo de uso
int main() {
    No *raiz = cria_no(10);
    raiz->filho_esquerdo = cria_no(5);
    raiz->filho_direito = cria_no(15);
    raiz->filho_esquerdo->filho_esquerdo = cria_no(3);
    raiz->filho_esquerdo->filho_direito = cria_no(7);

    int chave = 7;
    if (busca_arvore(chave, raiz)) {
        printf("Chave %d encontrada na árvore.\n", chave);
    } else {
        printf("Chave %d não encontrada na árvore.\n", chave);
    }

    return 0;
}