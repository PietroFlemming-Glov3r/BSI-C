#include <stdlib.h>
#include <stdio.h>

typedef struct lista_Dup{
    int info;
    struct lista_Dup* ant;
    struct lista_Dup* prox;
} ListaDupla;

ListaDupla* inicializa();
ListaDupla* insere(ListaDupla* l, int v);
ListaDupla* busca(ListaDupla* l, int v);
ListaDupla* retira(ListaDupla* l, int v);