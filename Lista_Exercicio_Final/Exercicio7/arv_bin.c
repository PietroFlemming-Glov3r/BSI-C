#include "arv_bin.h"

Arvore* inicializa()
{
    return NULL;
}

Arvore* cria(int info, Arvore* esq, Arvore* dir)
{
    Arvore* p = (Arvore*)malloc(sizeof(Arvore));
    p -> info = info;
    p -> esq = esq;
    p -> dir = dir;
    return p;
}

int vazia(Arvore* a)
{
    return a == NULL;
}

void imprime_em_ordem(Arvore* a)
{
    if(!vazia(a))
    {
        imprime_em_ordem(a -> esq);
        printf("%d ", a -> info);
        imprime_em_ordem(a -> dir);
    }
}

void imprime_pre_ordem(Arvore* a)
{
    if(!vazia(a))
    {
        printf("%d ", a -> info);
        imprime_pre_ordem(a -> esq);
        imprime_pre_ordem(a -> dir);
    }
}

void imprime_pos_ordem(Arvore* a)
{
    if(!vazia(a))
    {
        imprime_pos_ordem(a -> esq);
        imprime_pos_ordem(a -> dir);
        printf("%d ", a -> info);
    }
}

Arvore* libera(Arvore* a)
{
    if(!vazia(a))
    {
        libera(a -> esq);
        libera(a -> dir);
        free(a);
    }
    return NULL;
}

int busca(Arvore* a, int v)
{
    if(vazia(a))
    {
        return 0;
    }
    else
    {
        return a -> info == v || busca(a -> esq, v) || busca(a -> dir, v);
    }
}