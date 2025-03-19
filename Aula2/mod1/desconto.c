#include <stdio.h>
// Função para calcular o valor do desconto
float calcularDesconto(float valor, float percentual)
{
    return valor * (percentual / 100);
}

// Procedimento para exibir o valor total com desconto
void exibirTotal(float valor, float desconto)
{
    float total = valor - desconto;
    printf("\n===========================\n");
    printf("Valor original: R$ %.2f\n", valor);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("===========================\n");
    printf("Valor com desconto: R$ %.2f\n", total);
    printf("===========================\n");
}

int main()
{
    float preco, percentualDesconto, desconto;

    //Solicita o preço e o percentual de desconto
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto);

    // Chama função para calcular o desconto
    desconto = calcularDesconto(preco, percentualDesconto);

    // Chama procedimento para exibir o total com desconto
    exibirTotal(preco, desconto);

    return 0;
}