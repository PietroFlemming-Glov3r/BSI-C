#include "lista_pilha.h"

int main()
{
    Pilha* p = inicializa();
    p = insere(p, 10);
    p = insere(p, 30);
    p = insere(p, 40);
    
    imprime(p);
    int v;
    pop(p, &v);
    printf("valor removido = %d\n", v);
    imprime(p);
    libera(p);
}
