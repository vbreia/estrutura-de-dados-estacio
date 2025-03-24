#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox;
} No;

typedef struct fila {
    No *inicio;
    No *fim;
} Fila;

Fila *criaFila() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void enfileira(Fila *f, int dado) {
    No *novo = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = NULL;
    if (f->inicio == NULL) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;
}

int desenfileira(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }
    No *aux = f->inicio;
    int dado = aux->dado;
    f->inicio = aux->prox;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }
    free(aux);
    return dado;
}

void imprimeFila(Fila *f) {
    No *aux = f->inicio;
    while (aux != NULL) {
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}

int main() {
    Fila *f = criaFila();
    enfileira(f, 10);
    enfileira(f, 20);
    enfileira(f, 30);
    enfileira(f, 40);
    enfileira(f, 50);
    printf("\n----------------\nAntes da remoção:\n");
    imprimeFila(f);
    printf("\n----------------\n");
    printf("Elemento removido: %d\n", desenfileira(f));
    printf("Elemento removido: %d\n", desenfileira(f));
    printf("\n----------------\nApós a remoção:\n");
    imprimeFila(f);
    return 0;
}
