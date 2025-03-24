#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox;
} No;

typedef struct pilha {
    No *topo;
} Pilha;

Pilha *criaPilha() {
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void push(Pilha *p, int dado) {
    No *novo = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = p->topo;
    p->topo = novo;
}

int pop(Pilha *p) {
    if (p->topo == NULL) {
        printf("Pilha vazia!\n");
        return -1;
    }
    No *aux = p->topo;
    int dado = aux->dado;
    p->topo = aux->prox;
    free(aux);
    return dado;
}

void imprimePilha(Pilha *p) {
    No *aux = p->topo;
    while (aux != NULL) {
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}

int main() {
    Pilha *p = criaPilha();
    push(p, 10);
    push(p, 20);
    push(p, 30);
    push(p, 40);
    push(p, 50);
    printf("\n----------------\nAntes da remoção:\n");
    imprimePilha(p);
    printf("\n----------------\n");
    printf("Elemento removido: %d\n", pop(p));
    printf("Elemento removido: %d\n", pop(p));
    printf("\n----------------\nApós a remoção:\n");
    imprimePilha(p);
    return 0;
}