#include <stdio.h>

// Protótipo das funções
float calcular_area_circulo(float raio);
float calcular_area_retangulo(float largura, float altura);

int main(){
    float raio = 5.0;
    float largura = 4;
    float altura = 6;

    // Chamando funçOes antes de suas definições completas
    printf("Área do círculo: %.2f\n", calcular_area_circulo(raio));
    printf("Área do retângulo: %.2f\n", calcular_area_retangulo(largura, altura));

    return 0;
}

// Definição da função para calcular a área do círculo
float calcular_area_circulo(float raio){
    return 3.14159 * raio * raio; // Fórmula da área do círculo
}

// Definição da função para calcular a área do retângulo
float calcular_area_retangulo(float largura, float altura){
    return largura * altura; // Fórmula da área do retângulo
}