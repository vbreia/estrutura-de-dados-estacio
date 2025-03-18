#include <stdio.h>
#include <string.h>

#define LEN 50

// Definição da estrutura endereco
struct endereco
{
    char rua[LEN];
    char cidade_estado_cep[LEN];
};

// Definição da estrutura student
struct student
{
    char id[10];
    int idade;
    struct endereco casa;   // Endereço da casa do estudante
    struct endereco escola; // Endereço da escola do estudante
    struct nome
    {
        char primeiro_nome[LEN];
        char sobrenome[LEN];
    } nome;
};

int main()
{
    struct student pessoa;

    // Preenchendo os dados manualmente
    strcpy(pessoa.id, "S12345");
    pessoa.idade = 30;

    strcpy(pessoa.casa.rua, "Rua das Flores, 123");
    strcpy(pessoa.casa.cidade_estado_cep, "São Paulo, SP - 01010-000");

    strcpy(pessoa.escola.rua, "Av. Central, 456");
    strcpy(pessoa.escola.cidade_estado_cep, "São Paulo, SP - 02020-000");

    strcpy(pessoa.nome.primeiro_nome, "Victor");
    strcpy(pessoa.nome.sobrenome, "Breia");

    // Exibindo os dados
    printf("ID: %s\n", pessoa.id);
    printf("Nome: %s %s\n", pessoa.nome.primeiro_nome, pessoa.nome.sobrenome);
    printf("Idade: %d\n", pessoa.idade);
    printf("\nEndereço da Casa:\n");
    printf("Rua: %s\n", pessoa.casa.rua);
    printf("Cidade/Estado/CEP: %s\n", pessoa.casa.cidade_estado_cep);

    printf("\nEndereço da Escola:\n");
    printf("Rua: %s\n", pessoa.escola.rua);
    printf("Cidade/Estado/CEP: %s\n", pessoa.escola.cidade_estado_cep);

    return 0;
}
