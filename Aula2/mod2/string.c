#include <stdio.h>
#include <string.h>

int main(){
    // Declaração de strings
    char nome1[50] = "João";
    char nome2[] = " Silva";

    // Concatenação de strings
    strcat(nome1, nome2);
    printf("Nome completo: %s\n", nome1);

    // Medindo o tamanho da string concatenada
    int comprimento = strlen(nome1);
    printf("Comprimento da string: %d\n", comprimento);

    // Comparando strings
    if (strcmp(nome1, "João Silva") == 0){
        printf("As strings são iguais\n");
    } else {
        printf("As strings são diferentes\n");
    }

    // Copiando uma string para outra
    char copia[50];
    strcpy(copia, nome1);
    printf("Cópia da string: %s\n", copia);

    return 0;
}

// Funções de manipulação de strings
/*
strlen
Retorna o tamanho de uma string. Sintaxe: strlen(string); onde "string" é um tipo char *c.

strcpy
Copia uma string em outra. Sintaxe: strcpy(s,t); onde "s" e "t" são do tipo char *c.

strcmp
Compara duas strings. Sintaxe: strcmp(s,t); onde "s" e "t" são do tipo char *c.

strcat
Concatena duas strings. Sintaxe: strcat(s,t); onde "s" e "t" são do tipo char *c.

sprintf
Escreve uma string formatada. Sintaxe: sprintf(s, "texto", variáveis); onde "s" é do tipo char *c.

sscanf
Lê uma string formatada. Sintaxe: sscanf(s, "texto", variáveis); onde "s" é do tipo char *c.
*/