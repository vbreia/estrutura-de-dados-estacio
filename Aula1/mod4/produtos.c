#include  <stdio.h>
#include  <string.h>

#define NUM_PRODUTOS 5

struct Produto
{
    char nome[50];
    int codigo;
    float preco;
    int quantidade;
};

int main(){
    int i;
    struct Produto produtos[NUM_PRODUTOS];

    // Preenchendo os dados dos produtos
    strcpy(produtos[0].nome, "Arroz");
    produtos[0].codigo = 101;
    produtos[0].preco = 10.0;
    produtos[0].quantidade = 100;

    strcpy(produtos[1].nome, "Feijao");
    produtos[1].codigo = 102;
    produtos[1].preco = 8.0;
    produtos[1].quantidade = 50;

    strcpy(produtos[2].nome, "Macarrao");
    produtos[2].codigo = 103;
    produtos[2].preco = 5.0;
    produtos[2].quantidade = 80;

    strcpy(produtos[3].nome, "Carne");
    produtos[3].codigo = 104;
    produtos[3].preco = 20.0;
    produtos[3].quantidade = 30;
    
    strcpy(produtos[4].nome, "Leite");
    produtos[4].codigo = 105;
    produtos[4].preco = 3.0;
    produtos[4].quantidade = 120;

    // Exibindo os dados dos produtos
    printf("=== Estoque de Produtos ===\n");
    for (i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("Produto %d\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("\n");
    }
    return 0;

}

