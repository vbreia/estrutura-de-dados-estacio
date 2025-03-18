#include <stdio.h>
#include <string.h>

struct Disciplina
{
    char nome[50];
    char professor[50];
    int cargaHoraria;
};

struct Aluno
{
    char nome[50];
    int idade;
    int matricula;
    struct Disciplina disciplinas[3];
};

void cadastrarDisciplina(struct Disciplina *disciplina, const char *nome, const char *professor, int cargaHoraria)
{
    strcpy(disciplina->nome, nome);
    strcpy(disciplina->professor, professor);
    disciplina->cargaHoraria = cargaHoraria;
}

void cadastrarAluno(struct Aluno *aluno, const char *nome, int idade, int matricula)
{
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->matricula = matricula;

    cadastrarDisciplina(&aluno->disciplinas[0], "Matematica", "Joao", 60);
    cadastrarDisciplina(&aluno->disciplinas[1], "Portugues", "Maria", 60);
    cadastrarDisciplina(&aluno->disciplinas[2], "Fisica", "Jose", 60);
}

void exibirAluno(struct Aluno *aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    printf("Matricula: %d\n", aluno->matricula);
    printf("\n");

    for(int i = 0; i < 3; i++){
        printf("Disciplina %d\n", i+1);
        printf("Nome: %s\n", aluno->disciplinas[i].nome);
        printf("Professor: %s\n", aluno->disciplinas[i].professor);
        printf("Carga Horaria: %d\n", aluno->disciplinas[i].cargaHoraria);
        printf("\n");
    }
}
int main(){
    struct Aluno aluno1;
    cadastrarAluno(&aluno1, "Joao", 20, 123);
    exibirAluno(&aluno1);

    return 0;
}