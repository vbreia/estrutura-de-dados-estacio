#include <stdio.h>

#define TAMANHO 5

void bolha(int *v)
{
    int troca = 1;
    int i = 0;
    int aux;
    while (troca)
    {
        troca = 0;
        while (i < TAMANHO - 1)
        {
            if (v[i] > v[i + 1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                troca = 1;
            }
            i++;
        }
        i = 0;
    }
}

int main()
{
    int v[TAMANHO] = {5, 3, 4, 1, 2};
    printf("Array antes da ordenação:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    bolha(v);

    printf("Array após a ordenação:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}