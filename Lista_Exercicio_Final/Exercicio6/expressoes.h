#include <stdlib.h>
#include <stdio.h>

typedef struct expressoes{
    char info;
    struct expressoes *prox;
} Expressoes;

Expressoes* inicializa ();
Expressoes* insere (Expressoes* e, char l);
int vazia (Expressoes* e);
void imprime (Expressoes* e);
Expressoes* pop(Expressoes* e, char digito_verifica, int *chave);
void libera (Expressoes* e);