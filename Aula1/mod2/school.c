#include <stdio.h>
#include <string.h> 

// Definição da estrutura Disciplina
struct Disciplina {
    char nome[30];
    char professor[50];
    int cargaHoraria;
};

// Definição da estrutura Aluno, que contém um array de disciplinas
struct Aluno {
    char nome[50];
    int idade;
    int matricula;
    struct Disciplina disciplinas[3];
}; 

// Função para cadastrar uma disciplina
void cadastrarDisciplina(struct Disciplina *disciplina, const char *nome, const char *professor, int cargaHoraria) {
    strcpy(disciplina->nome, nome); // Copia o nome da disciplina
    strcpy(disciplina->professor, professor); // Copia o nome do professor
    disciplina->cargaHoraria = cargaHoraria; // Define a carga horária
}

// Função para cadastrar um aluno e suas disciplinas
void cadastrarAluno(struct Aluno *aluno, const char *nome, int idade, int matricula) {
    strcpy(aluno->nome, nome); // Copia o nome do aluno
    aluno->idade = idade; // Define a idade do aluno
    aluno->matricula = matricula; // Define a matrícula do aluno

    // Cadastra as disciplinas do aluno
    cadastrarDisciplina(&aluno->disciplinas[0], "Matematica", "Prof. Joao Silva", 60);
    cadastrarDisciplina(&aluno->disciplinas[1], "Historia", "Prof. Julia Costa", 45);
    cadastrarDisciplina(&aluno->disciplinas[2], "Quimica", "Prof. Carlos Souza", 50);
}

// Função para exibir as informações de um aluno
void exibirAluno(struct Aluno *aluno) {
    int i;
    
    printf("Nome do Aluno: %s\n", aluno->nome); // Exibe o nome do aluno
    printf("Idade: %d\n", aluno->idade); // Exibe a idade do aluno
    printf("Matricula: %d\n", aluno->matricula); // Exibe a matrícula do aluno

    printf("Disciplinas:\n");
    for (i = 0; i < 3; i++) { // Loop para exibir as disciplinas do aluno
        printf("  Disciplina %d:\n", i + 1);
        printf("    Nome: %s\n", aluno->disciplinas[i].nome); // Exibe o nome da disciplina
        printf("    Professor: %s\n", aluno->disciplinas[i].professor); // Exibe o nome do professor
        printf("    Carga Horaria: %d horas\n", aluno->disciplinas[i].cargaHoraria); // Exibe a carga horária
    }
}

int main() {
    struct Aluno aluno1; // Declaração de um aluno
    cadastrarAluno(&aluno1, "Alana Lima", 20, 1234); // Cadastro do aluno e suas disciplinas
    exibirAluno(&aluno1); // Exibição das informações do aluno
    return 0;
}