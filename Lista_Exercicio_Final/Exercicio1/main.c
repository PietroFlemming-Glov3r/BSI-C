#include "exerc1.h"

void main(){
    
    int t;
    Lista* l = inicializa();
    t = vazia(l);
    l = insere_ordenado(l, 1);
    imprime(l);
    l = insere_ordenado(l, 2);
    imprime(l);
    l = insere_ordenado(l, 4);
    imprime(l);
    Lista* aux = busca(l, 3);
    l = retira(l, 4);
    imprime(l);
    libera(l);
}