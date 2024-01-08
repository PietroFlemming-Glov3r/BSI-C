#include <stdlib.h>
#include <stdio.h>

typedef struct face{
    char info[5];
    struct face *prox;
} Face;

Face* inicializa ();
Face* insere (Face* f, char info[5]);
int vazia (Face* f);
Face* pop(Face* f, char info[5], int *v);
void libera (Face* f);