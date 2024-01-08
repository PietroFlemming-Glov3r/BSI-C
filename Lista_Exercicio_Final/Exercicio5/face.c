#include "face.h"

Face* inicializa()
{
    return NULL;
}

Face* insere(Face* f, char t[5])
{
    Face* ant = (Face*)malloc(sizeof(Face));
    if(ant == NULL)
    {
        exit(1);    
    }
    
    
    ant->info[0] = t[0];
    ant->info[1] = t[1];
    ant->info[2] = t[2];
    ant->info[3] = t[3];
    ant->info[4] = '\0';
    ant->prox = f;
    
    return ant;
    
}

int vazia(Face* f)
{
    return (f==NULL);
}

Face* pop(Face* f, char t[5], int *v)
{        
    int l = comparaStrings(f -> info, t);
    if(l == 0)
    {
        *v = 1;
        if(f -> prox != NULL)
        {
            f = f -> prox;
        }
        return f;
    }
    *v = 0;
    return f;

}

int comparaStrings(char str1[5], char str2[5]) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            return 0;
        }
        i++;
    }

    return -1;
}

void libera(Face* f)
{
    Face* q = f;
    while(q != NULL)
    {
        Face* t = q -> prox;
        free(q);
        q = t;
    }
}