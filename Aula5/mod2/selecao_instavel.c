#include <stdio.h>

#define TAMANHO 5

void selecao(int *v)
{
    int i, j, aux, minimo, pos_minimo;
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
        
        // Apenas trocar se necessário
        if (pos_minimo != i)
        {
            aux = v[pos_minimo];
            v[pos_minimo] = v[i];
            v[i] = aux;
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
    
    selecao(v);
    
    printf("Vetor após a ordenação:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    
    printf("\nO próximo exemplo \"selecao_estavel.c\" mostrará um algoritmo de seleção estável.\n");
    printf("\nEste algoritmo é instável porque, durante a troca de elementos, ele pode alterar a ordem relativa de elementos iguais.\n");
    printf("Por exemplo, se dois elementos têm o mesmo valor e estão em posições diferentes, a troca pode fazer com que o elemento que aparece primeiro\n");
    printf("no vetor original acabe depois do outro no vetor ordenado.\n");
    return 0;
}
