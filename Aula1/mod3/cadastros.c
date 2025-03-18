#include <stdio.h>
#include <string.h>

struct Pessoa
{
    char nome[50];
    int idade;
    char telefone[15];
};

int main(){
    struct Pessoa lista[3];
    int i;

    // Preenchendo as informaćÕes para cada pessoa
    strcpy(lista[0].nome, "Joao");
    lista[0].idade = 30;
    strcpy(lista[0].telefone, "123456789");

    strcpy(lista[1].nome, "Maria");
    lista[1].idade = 25;
    strcpy(lista[1].telefone, "987654321");

    strcpy(lista[2].nome, "Pedro");
    lista[2].idade = 35;
    strcpy(lista[2].telefone, "456789123");

    // Exibindo as informaçÕes de cada pessoa
    for(i = 0; i < 3; i++){
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Telefone: %s\n", lista[i].telefone);
        printf("\n");
    }
    return 0;
}
