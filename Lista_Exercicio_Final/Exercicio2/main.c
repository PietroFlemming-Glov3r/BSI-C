#include "lista_circular.h"

void main(){
    
    int t;
    Lista* l = inicializa();
    t = vazia(l);
    l = insere(l, 0);
    l = insere(l, 1);
    l = insere(l, 2);
    l = insere(l, 3);
    l = insere(l, 4);
    l = insere(l, 6);
    l = insere(l, 7);
    l = insere(l, 8);
    l = insere(l, 9);
    l = insere(l, 10);
    imprime(l);
    Lista* aux1 = busca(l, 3);
    Lista* aux2 = busca(l, 5);
    imprime(l);
    l = retira(l, 4);
    l = retira(l, 2);
    imprime(l);
    libera(l);
}
