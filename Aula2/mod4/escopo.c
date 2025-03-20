#include <stdio.h>

int soma(int x, int y); // Protótipo da função
int resultado_global; // Variável global

int main() {
    int num1, num2;
    
    // Inicializa as variáveis
    num1 = 10;
    num2 = 20;
    
    // Chama a função soma e armazena o resultado na variável global
    resultado_global = soma(num1, num2);
    
    // Imprime o resultado
    printf("%d + %d = %d\n", num1, num2, resultado_global);
    
    return 0;
}

int soma(int x, int y) {
    return x + y;
}
