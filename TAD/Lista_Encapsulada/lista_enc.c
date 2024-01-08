#include "lista_enc.h"

Lista* inicializa()
{
    return NULL;
}

Lista* insere(Lista* l, int info)
{
    Lista* novo = (Lista* )malloc(sizeof(Lista));
    if(novo == NULL){
        exit(1);
    }
    novo -> info = info;
    novo -> prox = l;
    return novo;
}

void imprime(Lista* l)
{
    Lista* p = l;
    for(p = l ; p != NULL ; p = p -> prox){
        printf("%d -> ", p -> info);
    }
    printf("NULL\n");
}

int vazia(Lista* l)
{
    return l == NULL;   
}

Lista* busca(Lista* l, int v)
{
    for(Lista* p = l ; p != NULL ; p = p -> prox){
        if(p -> info == v){
            return p;
        }
    }
    return NULL;
}

Lista* retira(Lista* l, int v)
{
    Lista* ant = NULL;
    Lista* p = l;
    while(p != NULL && p -> info != v){
        ant = p;
        p = p -> prox;
    }
    if(p == NULL){
        return l;
    }
    if(ant == NULL){
        l = p -> prox;
    }
    else{
        ant -> prox = p -> prox;
    }
    free(p);
    return l;
}

void libera(Lista* l)
{
    Lista* p = l;
    Lista* t = NULL;
    while(p != NULL){
        t = p -> prox;
        free(p);
        p = t;
    }
}
