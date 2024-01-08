#include "face.h"

int main()
{
    Face* f = inicializa();
    char info[5] = "FACE\0";
    f = insere(f,info);
    
    int numero_vezes, pontuacao = 0;
    scanf("%d", &numero_vezes);
    for(numero_vezes ; numero_vezes != 0 ; numero_vezes -= 1)
    {
        char lixo[2], inverso[5], t[5];
        int v;
        scanf("%s", lixo);
        t[0] = lixo[0];
        scanf("%s", lixo);
        t[1] = lixo[0];
        scanf("%s", lixo);
        t[2] = lixo[0];
        scanf("%s", lixo);
        t[3] = lixo[0];
        t[4] = '\0';
        inverso[0] = t[3];
        inverso[1] = t[2];
        inverso[2] = t[1];
        inverso[3] = t[0];
        inverso[4] = '\0';
        f = pop(f,inverso,&v);
        if(v == 1)
        {
            pontuacao += 1;
        }
        else
        {
            f = insere(f, t);  
        }
    }
    printf("%d", pontuacao);
}
