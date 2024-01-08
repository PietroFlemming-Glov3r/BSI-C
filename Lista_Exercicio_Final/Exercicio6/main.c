#include "expressoes.h"

int main()
{
    int numero_vezes;
    scanf("%d", &numero_vezes);
    for(numero_vezes ; numero_vezes > 0 ; numero_vezes -= 1)
    {
        Expressoes* e = inicializa();
        char a[100000], digito_verifica = 'a';
        int i = 0;
        scanf("%s", a);
        while(digito_verifica != '\0')
        {
            int chave = 0;
            digito_verifica = a[i];
            if(digito_verifica == '(' || digito_verifica == '[' || digito_verifica == '{')
            {
                e = insere(e,digito_verifica);   
            }
            else
            {
                if(digito_verifica == ')')
                {
                    e = pop(e,'(',&chave);   
                }
                else if(digito_verifica == ']')
                {
                    e = pop(e,'[',&chave);   
                }
                else if(digito_verifica == '}')
                {
                    e = pop(e,'{',&chave);   
                }
                if(chave == 1)
                {
                    break;
                }
            }
            i++;
        }
        if(vazia(e))
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
        libera(e);
    }
}


