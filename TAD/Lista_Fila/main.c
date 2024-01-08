#include "lista_fila.h"

void main()
{
    Fila* f = cria();
    insere(f,5);
    insere(f,40);
    insere(f,37);
    int p;
    p = retira(f);
    imprime(f);
    printf("Valor Retirado = %d\n", p);
}