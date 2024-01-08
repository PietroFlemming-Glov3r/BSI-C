#include <stdio.h>
#include <stdlib.h> 

typedef struct esfera
{
    double r, a, v;
} Esfera;

Esfera* cria(double r);
void libera (Esfera* e);
void acessa (Esfera* e, double* r);
void atribui (Esfera* e, double r);
void raio (Esfera* e, double* r);
void area (Esfera* e, double* a);
void area (Esfera* e, double* v);