#include <stdio.h>

#define TAMANHO 5

void insertion(int *v)
{
    int i, j, aux;
    for (i = 0; i < TAMANHO - 1; i++)
    {
        j = i + 1;
        while (v[j - 1] > v[j] && j > 0)
        {
            aux = v[j - 1];
            v[j - 1] = v[j];
            v[j] = aux;
            j--;
        }
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

    insertion(v);

    printf("Array após a ordenação:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
