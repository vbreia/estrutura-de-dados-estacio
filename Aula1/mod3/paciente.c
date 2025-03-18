#include <stdio.h>
#include <string.h>

struct Paciente {
    char nome[50];
    int idade;
    char telefone[15];
};


int main(){
    struct Paciente pacientes[3];
    int i;

    // Preparando os dados dos pacientes
    strcpy(pacientes[0].nome, "Joao");
    pacientes[0].idade = 20;
    strcpy(pacientes[0].telefone, "9999-9999");

    strcpy(pacientes[1].nome, "Maria");
    pacientes[1].idade = 30;
    strcpy(pacientes[1].telefone, "8888-8888");

    strcpy(pacientes[2].nome, "Jose");
    pacientes[2].idade = 40;
    strcpy(pacientes[2].telefone, "7777-7777");

    // Exibindo os dados dos pacientes
    for(i = 0; i < 3; i++){
        printf("Paciente %d\n", i+1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Telefone: %s\n", pacientes[i].telefone);
        printf("\n");
    }

    return 0;
}