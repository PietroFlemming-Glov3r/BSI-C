#include "arv_bin.h"

void main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
    Arvore* arv = cria(a, cria(b, inicializa(),cria(c,inicializa(),inicializa())),cria(d,cria(e,inicializa(),inicializa()),cria(f,inicializa(),inicializa())));
    imprime_pre_ordem(arv);
    printf("\n");
    imprime_em_ordem(arv);
    printf("\n");
    imprime_pos_ordem(arv);
}
