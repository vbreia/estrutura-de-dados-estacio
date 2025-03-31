#include <stdio.h>

#define TAMANHO 5

void selecao_estavel(int *v)
{
    int i, j, minimo, pos_minimo;
    for (i = 0; i < TAMANHO - 1; i++)
    {
        minimo = v[i];
        pos_minimo = i;
        
        // Encontrar o menor elemento da parte não ordenada
        for (j = i + 1; j < TAMANHO; j++)
        {
            if (minimo > v[j])
            {
                minimo = v[j];
                pos_minimo = j;
            }
        }
        
        // Inserir o menor elemento na posição correta, deslocando os outros
        if (pos_minimo != i)
        {
            int temp = v[pos_minimo];
            for (j = pos_minimo; j > i; j--)
            {
                v[j] = v[j - 1];
            }
            v[i] = temp;
        }
    }
}

int main()
{
    int v[TAMANHO] = {64, 25, 12, 22, 11};
    
    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    
    selecao_estavel(v);
    
    printf("Vetor após a ordenação:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");


    // Explicação sobre a estabilidade do algoritmo
    printf("\nMotivo do algoritmo ser estável:\n");
    printf("O algoritmo de seleção estável mantém a ordem relativa de elementos iguais.\n");
    printf("Por exemplo, se dois elementos têm o mesmo valor, o que aparece primeiro no vetor original\n");
    printf("também aparecerá primeiro no vetor ordenado.\n");


    
    return 0;
}
