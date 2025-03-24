#include <stdlib.h>
#include <stdio.h>
/* 
Exercícios da playlist "Curso de Programaçao C - Canal Programe Seu Futuro"

Aula 243: Lista Simplesmente Encadeada - inserindo dados no início, no fim e no meio. Também exibindo a lista.
*/

typedef struct no{
    int valor;
    struct no *proximo;
}No;

// Procedimento para inserir no INÍCIO
void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }
    else{
        printf("Erro ao alocar memória!\n");
    }
};

// Procedimento para inserir no FIM

void inserir_no_fim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    
    if(novo){
        novo -> valor = num;
        novo -> proximo = NULL;

        // é o primeiro?
        if(*lista == NULL){
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->proximo){
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    }
    else{
        printf("Erro ao alocar memória!\n");
    }
}

// Procedimento para inserir no MEIO
void inserir_no_meio(No **lista, int num, int anterior){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo -> valor = num;
        // é o primeiro?
        if(*lista == NULL){
             novo -> proximo = NULL;
             *lista = novo;
        }
        else{
            aux = *lista;
            while(aux -> valor != anterior && aux -> proximo){
                aux = aux->proximo;
            }
            novo -> proximo = aux -> proximo;
            aux -> proximo = novo;
        }

    }
    else{
        printf("Erro ao alocar memória!\n");
    }
}

// Procedimento para exibir a lista
void imprimir(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main(){

    int opcao, valor, anterior;
    No *lista = NULL;

    do{
        printf("\n\n\t1 - Inserir no início\n");
        printf("\t2 - Inserir no fim\n");
        printf("\t3 - Inserir no meio\n");
        printf("\t4 - Exibir\n");
        printf("\t0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Informe o valor: ");
                scanf("%d", &valor);
                inserir_no_inicio(&lista, valor);
                break;
            case 2:
                printf("Informe o valor: ");
                scanf("%d", &valor);
                inserir_no_fim(&lista, valor);
                
                break;
            case 3:
                printf("Informe o valor e o valor de referência: ");
                scanf("%d %d", &valor, &anterior);
                inserir_no_meio(&lista, valor, anterior);
                
                break;
            case 4:
                imprimir(lista);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    }while (opcao != 0);


    return 0;
}