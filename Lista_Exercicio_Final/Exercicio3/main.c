#include "josephus.h"

void main()
{
    Lista* l = inicializa();
    
    int n, k;
    printf("Entrada de valor referente ao N\n");
    scanf("%d", &n);
    printf("Entrada de valor referente ao K\n");
    scanf("%d", &k);
    for(int i = 0 ; i < n ; i++)
    {
        l = insere(l, i);
    }
    l = retira(l, n, k);
    imprime(l);
}