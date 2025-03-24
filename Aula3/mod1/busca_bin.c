#include <stdio.h>
#include <math.h>

int busca_binaria(int lista[], int elemento, int inicio, int fim) {
    if (inicio > fim) return -1; // Elemento não encontrado

    int meio = floor((fim + inicio) / 2);

    if (lista[meio] == elemento)
        return meio; // Elemento encontrado

    if (elemento < lista[meio])
        return busca_binaria(lista, elemento, inicio, meio - 1); // Busca na esquerda
    else
        return busca_binaria(lista, elemento, meio + 1, fim); // Busca na direita
}

int main() {
    int lista[] = {10, 20, 30, 40, 50, 60, 70}; // Lista ordenada
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    int chave = 40;
    int resultado = busca_binaria(lista, chave, 0, tamanho - 1);

    if (resultado != -1)
        printf("Elemento encontrado na posição: %d\n", resultado);
    else
        printf("Elemento não encontrado.\n");

    return 0;
}
