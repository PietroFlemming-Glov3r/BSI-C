#include <stdlib.h>
#include <stdio.h>

typedef struct arvore
{
    int info;
    struct arvore* esq;
    struct arvore* dir;
}Arvore;

Arvore* inicializa();
Arvore* cria(int info, Arvore* esq, Arvore* dir);
int vazia(Arvore* a);
void imprime_em_ordem(Arvore* a);
void imprime_pre_ordem(Arvore* a);
void imprime_pos_ordem(Arvore* a);
Arvore* libera(Arvore* a);
int busca(Arvore* a, int v);