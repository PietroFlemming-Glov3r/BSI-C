#include "lista_circular.h"

Lista* inicializa()
{
    return NULL;
}

Lista* insere(Lista* l, int v)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    
    novo -> info = v;
    novo -> prox = l;
    
    
    if(l == NULL)
    {
        return novo;
    }
    
    if(l -> prox == NULL)
    {
        l -> prox = novo;
        return l;
    }
    
    else
    {
        Lista* q;
        for(q = l -> prox; q != l ; q = q -> prox)
        {
            if(q -> prox == l)
            {
                q -> prox = novo;
                break;
            }
        }
        return l;
    }
}

void imprime(Lista* l)
{
    Lista* p = l;
    printf("%d -> ", p -> info);
    for(p = l -> prox ; p != l ; p = p -> prox){
        printf("%d -> ", p -> info);
    }
    printf("Inicio\n");
}

int vazia(Lista* l)
{
    return l == NULL;   
}

Lista* busca(Lista* l, int v)
{
    if(l -> info == v){
            printf("Valor %d na Lista\n", v);
            return l;
        }
        
    for(Lista* p = l -> prox ; p != l ; p = p -> prox){
        if(p -> info == v){
            printf("Valor %d na Lista\n", v);
            return p;
        }
    }
    printf("Valor %d fora da Lista\n", v);
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
    Lista* p = l -> prox;
    Lista* t = NULL;
    while(p != l){
        t = p -> prox;
        free(p);
        p = t;
    }
    free(l);
}