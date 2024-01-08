#include "lista_pilha.h"

Pilha* inicializa()
{
    return NULL;
}

Pilha* insere(Pilha* p, int v)
{
    Pilha* ant = (Pilha*)malloc(sizeof(Pilha));
    if(ant == NULL)
    {
        exit(1);    
    }
    
    
    ant->info = v;
    ant->prox = p;
    
    return ant;
    
}

int vazia(Pilha* p)
{
    return (p==NULL);
}

void imprime(Pilha* p)
{
    for(Pilha* q = p ; q != NULL ; q = q -> prox)
    {
        printf("%d ", q -> info);
    }
    printf("\n");
}

Pilha* retira(Pilha* p, int *v)
{
    *v = p -> info;
    
    Pilha* q = p -> prox;
    
    p -> info = q -> info;
    p -> prox = q -> prox;
    
    return p;
}

void libera(Pilha* p)
{
    Pilha* q = p;
    while(q != NULL)
    {
        Pilha* t = q -> prox;
        free(q);
        q = t;
    }
}