#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 15 // Tamanho máximo da árvore (para um heap binário completo com altura 3)

char arvore[TAMANHO]; // Representação da árvore como um array

// Inicializa a árvore com valores nulos
void inicializa_arvore() {
    for (int i = 0; i < TAMANHO; i++) {
        arvore[i] = '\0'; // '\0' representa um nó vazio
    }
}

// Insere um nó na posição do filho direito
int insere_filho_direita(char chave, int pai) {
    if (pai < 0 || pai >= TAMANHO || arvore[pai] == '\0') {
        printf("Erro: nó pai inexistente!\n");
        return 0; // Falha
    }

    int pos_filho_direita = (pai * 2) + 2;
    if (pos_filho_direita >= TAMANHO) {
        printf("Erro: posição do filho direito fora dos limites!\n");
        return 0; // Falha
    }

    arvore[pos_filho_direita] = chave;
    return 1; // Sucesso
}

// Insere um nó na posição do filho esquerdo
int insere_filho_esquerda(char chave, int pai) {
    if (pai < 0 || pai >= TAMANHO || arvore[pai] == '\0') {
        printf("Erro: nó pai inexistente!\n");
        return 0; // Falha
    }

    int pos_filho_esquerda = (pai * 2) + 1;
    if (pos_filho_esquerda >= TAMANHO) {
        printf("Erro: posição do filho esquerdo fora dos limites!\n");
        return 0; // Falha
    }

    arvore[pos_filho_esquerda] = chave;
    return 1; // Sucesso
}

// Exibe a árvore
void exibe_arvore() {
    printf("Árvore:\n");
    for (int i = 0; i < TAMANHO; i++) {
        if (arvore[i] == '\0') {
            printf("[ ] ");
        } else {
            printf("[%c] ", arvore[i]);
        }
    }
    printf("\n");
}

int main() {
    inicializa_arvore();

    // Insere a raiz
    arvore[0] = 'A';

    // Insere filhos
    insere_filho_esquerda('B', 0); // Filho esquerdo de A
    insere_filho_direita('C', 0); // Filho direito de A
    insere_filho_esquerda('D', 1); // Filho esquerdo de B
    insere_filho_direita('E', 1); // Filho direito de B

    // Exibe a árvore
    exibe_arvore();

    return 0;
}