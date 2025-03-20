#include <stdio.h>

// Fução que dobra o valor (passagem por valor)
void dobrar_valor(int num){
    num = num * 2; // Aqui, apenas a cópia é modificada
    printf("Dentro da função (por valor), o valor é: %d\n", num);
}   

// Função que dobra o valor (passagem por referência)
void dobrar_valor_ref(int *num){
    *num = *num * 2; // Aqui, o valor original é modificado
    printf("Dentro da função (por referência), o valor é: %d\n", *num);
}

int main(){
    int numero = 10;
    printf("\n================================================\n\n");
    // Passagem por valor
    printf("Antes da função (por valor), o valor é: %d\n", numero);	
    dobrar_valor(numero);
    printf("Depois da função (por valor), o valor é: %d\n", numero);
    printf("\n================================================\n\n");

    // Passagem por referência
    printf("Antes da função (por referência), o valor é: %d\n", numero);
    dobrar_valor_ref(&numero);
    printf("Depois da função (por referência), o valor é: %d\n", numero);
    printf("\n================================================\n\n");

    return 0;
}