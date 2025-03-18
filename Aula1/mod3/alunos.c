#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int idade;
    int matricula;
    char curso[50];
};

int main()
{
    int i;
    struct Aluno alunos[3];

    // Preparando os dados dos alunos
    strcpy(alunos[0].nome, "Joao");
    alunos[0].idade = 20;
    alunos[0].matricula = 123;
    strcpy(alunos[0].curso, "Engenharia");

    strcpy(alunos[1].nome, "Maria");
    alunos[1].idade = 30;
    alunos[1].matricula = 456;
    strcpy(alunos[1].curso, "Medicina");

    strcpy(alunos[2].nome, "Jose");
    alunos[2].idade = 40;
    alunos[2].matricula = 789;
    strcpy(alunos[2].curso, "Direito");

    // Exibindo os dados dos alunos
    printf("=== Dados dos Alunos Cadastrados ===\n");
    for (i = 0; i < 3; i++)
    {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("\n");
    }
}