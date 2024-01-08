#include "expressoes.h"

Expressoes* inicializa()
{
    return NULL;
}

Expressoes* insere(Expressoes* e, char l)
{
    Expressoes* ant = (Expressoes*)malloc(sizeof(Expressoes));
    if(ant == NULL)
    {
        exit(1);    
    }
    
    
    ant->info = l;
    ant->prox = e;
    
    return ant;
    
}

int vazia(Expressoes* e)
{
    return (e == NULL);
}

void imprime(Expressoes* e)
{
    for(Expressoes* q = e ; q != NULL ; q = q -> prox)
    {
        printf("%d ", q -> info);
    }
    printf("\n");
}

Expressoes* pop(Expressoes* e, char digito_verifica, int *chave)
{
    if(vazia(e) == 0 && e -> info == digito_verifica)
    {
        Expressoes* q = e -> prox;
        free(e);
        return q;
    }
        *chave == 1;
        e = insere(e,digito_verifica);
        return e;
}

void libera(Expressoes* e)
{
    Expressoes* q = e;
    while(q != NULL)
    {
        Expressoes* t = q -> prox;
        free(q);
        q = t;
    }
}