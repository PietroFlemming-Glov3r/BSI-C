#include <stdlib.h>
#include <stdio.h>

typedef struct no
{
    int info;
    struct no* prox;
}No;

typedef struct fila
{
    No* ini;
    No* fim;
}Fila;

Fila* cria();
Fila* insere(Fila* f, int v);
int retira(Fila* f);
void imprime(Fila* f);
void libera(Fila* f);