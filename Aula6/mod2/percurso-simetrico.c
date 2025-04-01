#include <stdio.h>
#include <stdlib.h>

// Definição do nó da árvore
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Função para realizar o percurso em ordem simétrica (in-order)
void inOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left); // Percorre a subárvore esquerda
    printf("%d ", root->data); // Visita o nó atual
    inOrderTraversal(root->right); // Percorre a subárvore direita
}

// Função principal
int main() {
    // Exemplo de criação de uma árvore
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Percurso em ordem simétrica: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}