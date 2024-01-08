#include <stdlib.h>
#include <stdio.h>

typedef struct pilha{
    int info;
    struct pilha *prox;
} Pilha;

Pilha* inicializa ();
Pilha* insere (Pilha* p, int v);
int vazia (Pilha* p);
void imprime (Pilha* p);
Pilha* retira(Pilha* p, int *v);
void libera (Pilha* p);