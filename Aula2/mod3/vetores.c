#include <stdio.h>

// Função que calcula a soma de elementos de um vetor
int calcular_soma(int vetor[], int tamanho){
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++){
        soma += vetor[i]; // Adiciona o valor do elemento ao total
        }
    return soma;
}

int main(){
    // Definindo um vetor de inteiros
    int lista_compras[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(lista_compras) / sizeof(lista_compras[0]); // Calcula o tamanho do vetor

    // Chamando a função para calcular a soma dos elementos do vetor
    int total = calcular_soma(lista_compras, tamanho);

    // Exibindo o resultado
    printf("A soma dos elementos do vetor é: %d\n", total);

    return 0;
}