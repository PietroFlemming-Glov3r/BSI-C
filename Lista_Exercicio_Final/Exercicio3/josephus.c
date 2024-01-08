#include "josephus.h"

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
    printf("Valor final %d\n", p -> info + 1);
}

Lista* retira(Lista* l, int q, int v)
{
    Lista* p = l;
    Lista* ant = NULL;
    for(int j = 0 ; j < q-1 ; j++)
    {
        for(int i = 0 ; i < v-1 ; i++)
        {
            ant = p;
            p = p -> prox;
        }
        Lista* m = p -> prox;
        printf("Valor removido %d\n", p -> info + 1);
        free(p);
        p = m;
        ant -> prox = p;
    }
    return p;
}
