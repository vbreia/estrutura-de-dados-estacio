#include <stdio.h>
// Gravando dados em um arquivo e lendo os dados gravados

int main() {
    FILE *arquivo; //ponteiro para o arquivo
    char nome[50];
    int idade;

// Abrindo o arquivo no modo "w" para escrita
arquivo = fopen("dados.txt", "w");
if (arquivo == NULL) {
    printf("Erro na abertura do arquivo\n");
    return 1;
}

// Coletando dados do usuário
printf("=====================================\n");
printf("Digite seu nome: ");
scanf("%s", nome);
printf("Digite sua idade: ");
scanf("%d", &idade);

// Gravando os dados no arquivo
fprintf(arquivo, "Nome: %s\nIdade: %d\n", nome, idade);

// Fechando o arquivo
fclose(arquivo);

// Reabrindo o arquivo no modo "r" para leitura
arquivo = fopen("dados.txt", "r");
if (arquivo == NULL) {
    printf("Erro na abertura do arquivo\n");
    return 1;
}

// Lendo os dados do arquivo
fscanf(arquivo, "Nome: %s\nIdade: %d\n", nome, &idade);
printf("=====================================\n");
printf("Dados Gravados no arquivo:\n");
printf("Nome: %s\n", nome);
printf("Idade: %d\n", idade);

// Exibindo os dados na lidos
printf("=====================================\n");
printf("Dados lidos do arquivo:\n");
printf("Nome: %s\nIdade: %d\n", nome, idade);

// Fechando o arquivo
fclose(arquivo);

return 0;
}

//Modos de abertura de arquivos em C:
/*
"r" − Leitura (open).
 
"w" − Escrita (rewrite).
 
"a" − Adição (append).
 
"r+" − Para atualizar um arquivo (read e write).
 
"w+" − Para criar um arquivo para atualização.
 
"a+" − Adição, em arquivo para leitura e escrita.
*/

//funções:
/*
fgetc
Responsável pela leitura de um caractere de um arquivo indicado pelo ponteiro file_pointer. No caso de chegar ao fim do arquivo, será retornado EOF. Sintaxe: [caractere] = fgetc (file_pointer).


fputc
Responsável pela inserção de um caractere no arquivo. A função escreve o caractere na próxima posição do arquivo apontado pelo file_pointer. É a operação inversa de getc. Sintaxe: fputc (caractere, file_pointer).


ungetc
Responsável em devolver o último caractere lido do arquivo para o file_pointer, aceitando apenas um caractere devolvido por vez (coloca em um buffer temporário). Sintaxe: ungetc (caractere, file_pointer).


fprintf
Responsável pela saída formatada em arquivos, semelhante à função printf, mas atua sobre arquivos, definidos pelo primeiro parâmetro, que é um ponteiro para o arquivo. Sintaxe: fprintf (file_pointer,"controle", arg1, arg2,...).


fscanf
Responsável pela entrada formatada a partir de arquivos. Atua como a função inversa de fprintf e análoga à função scanf, só que atuando sobre arquivos. Sintaxe: fscanf (file_pointer,"controle",arg1,arg2,...).


fclose
Responsável pelo fechamento do arquivo em uso. É utilizado para encerrar o acesso a um arquivo previamente aberto, liberando os recursos associados a ele. Sintaxe: fclose (file_pointer).


Outras funções
fflush(): Descarrega o buffer; fgets(): Obtém uma string do arquivo; fputs(): Insere uma string no arquivo; fread(): Lê um bloco de dados do arquivo; fwrite(): Escreve um bloco de dados no arquivo; fseek(): Reposiciona o ponteiro para o arquivo; rewind(): Reposiciona o ponteiro para o início do arquivo; ftell(): Retorna a posição do ponteiro.
*/