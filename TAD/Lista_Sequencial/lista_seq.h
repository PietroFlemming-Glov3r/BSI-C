#include <stdio.h>
#define MAX 100

typedef struct
{
    int v[MAX];
    int n;
} tlista;

void criar(tlista *l);
void exibir(tlista l);
int vazia(tlista l);
int cheia(tlista l);
int tamanho(tlista l);
int elemento(tlista l, int pos, int*dado);
int posicao(tlista l, int dado);
int insere_final(tlista *l, int dado);
int remover(tlista *l, int pos, int *dado);
int set_elemento(tlista *l, int pos, int dado);
void esvaziar(tlista *l);