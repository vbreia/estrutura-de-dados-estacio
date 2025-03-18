#include <stdio.h>
#include <string.h>

struct Paciente {
    char nome[50];
    int idade;
    char telefone[15];
};

void exibirPaciente(struct Paciente p){
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Telefone: %s\n", p.telefone);
    printf("\n");
}

int main() {
    struct Paciente paciente1 = {"Joao", 20, "9999-9999"};
    exibirPaciente(paciente1);
    return 0;
}