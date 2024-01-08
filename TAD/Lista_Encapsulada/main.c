#include "lista_enc.h"

int main(){
    
    int t;
    Lista* l = inicializa();
    t = vazia(l);
    l = insere(l, 1);
    l = insere(l, 2);
    l = insere(l, 4);
    imprime(l);
    Lista* aux = busca(l, 3);
    l = retira(l, 4);
    imprime(l);
    libera(l);
}