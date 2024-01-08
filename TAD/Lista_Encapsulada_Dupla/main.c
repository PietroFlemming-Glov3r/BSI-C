#include "lista_enc_dup.h"

int main()
{

    ListaDupla* l = inicializa();
    l = insere(l,5);
    l = insere(l,2);
    l = insere(l,7);
    ListaDupla* ele = busca(l,2);
    l = retira(l, 2);
    
}
