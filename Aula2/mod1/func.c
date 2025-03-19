#include <stdio.h>

// Função para calcular o total da compra
float calcularTotal(float preco1, float preco2)
{
    return preco1 + preco2;
}

int main()
{
    float item1 = 5.50;
    float item2 = 3.75;
    float total = calcularTotal(item1, item2);
    printf("Total da compra: %.2f\n", total);

    return 0;
}