#include "lista_fila.h"

Fila* cria()
{
    Fila* f = (Fila*)malloc(sizeof(Fila));
    
    f -> ini = NULL;
    f -> fim = NULL;
    return f;
}

Fila* insere(Fila* f, int v)
{
    No* novo = (No*)malloc(sizeof(No));
    novo -> info = v;
    novo -> prox = NULL;
    if(f -> fim != NULL)
    {
        f -> fim -> prox = novo;
    }
    f -> fim = novo;
    if(f -> ini == NULL)
    {
        f -> ini = f -> fim;
    }
    return f;
}

int retira(Fila* f)
{
    if(f -> ini == NULL)
    {
        printf("Fila Vazia\n");
        exit(1);
    }
    
    int v;
    
    v = f -> ini -> info;
    No* temp = f -> ini -> prox;
    free (f -> ini);
    f -> ini = temp;
    if(f -> ini == NULL)
    {
        f -> fim == NULL;
    }
    return v;
}

void imprime(Fila* f)
{
    No* q;
    for(q = f -> ini ; q != NULL ; q = q -> prox)
    {
        printf("%d \n", q -> info);
    }
}

void libera(Fila* f)
{
    No* q = f -> ini;
    while (q != NULL)
    {
        No* temp = q -> prox;
        free(q);
        q = temp;
    }
    
    free(f);
}
