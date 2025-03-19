#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[] = "Programacao123";
    int i = 0;

    // Percorrendo cada caractere da string
    while (texto[i]){
        // Verificando se o caractere é uma letra
        if (isalpha(texto[i])){
            printf("[ %c ] - É uma letra\n", texto[i]);
            
            // Transformando em maiúsculo se for minúscula
            if (islower(texto[i])){
                texto[i] = toupper(texto[i]);
                printf("Convertendo para maiúsculo: [ %c ]\n", texto[i]);
            } else if(isupper(texto[i])){
                // Transformando em minúscula se for maiúscula
                texto[i] = tolower(texto[i]);
                printf("Convertendo para minúsculo: [ %c ]\n", texto[i]);
            }
        }

        // Verificando se o caractere é um número
        else if(isdigit(texto[i])){
            printf("[ %c ] - É um número\n", texto[i]);
        }
        i++;
        
    }
    printf("Texto final: %s\n", texto);
    return 0;
    
}