#include "esfera.h"

/*Cria a Esfera*/
Esfera* cria (double r){
    Esfera* e = (Esfera*)malloc(sizeof(Esfera));
    if(e == NULL){
        exit(1);
    }
    
    e -> r = r;
    return e;
}

/*Limpa os dados*/
void libera (Esfera* e) {
    free(e);
}

/*Retorna o valor atual do raio da esfera*/
void acessa (Esfera* e, double* r) {
    *r = e->r;
}

/*Define novo valor para o raio da esfera*/
void atribui (Esfera* e, double r) {
    e -> r = r;
}

/*Devolve o valor de raio da Esfera*/
void raio (Esfera* e, double* r) {
    *r = e->r;
}

/*Devolve o valor de área da Esfera*/
void area (Esfera* e, double* a) {
    *a = 4 * 3.14159265359 * (e -> r*e -> r);
}

/*Devolve o valor de volume da Esfera*/
void volume (Esfera* e, double* v) {
    *v = 4/3 * 3.14159265359 * (e -> r * e -> r*e -> r);
}