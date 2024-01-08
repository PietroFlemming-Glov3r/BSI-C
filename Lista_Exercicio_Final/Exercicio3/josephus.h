#include <stdlib.h>
#include <stdio.h>

typedef struct lista_end{
    int info;
    struct lista_end * prox;
}Lista;

Lista* inicializa();
Lista* insere(Lista* l, int info);
void imprime(Lista* l);
Lista* retira(Lista* l, int q, int v);