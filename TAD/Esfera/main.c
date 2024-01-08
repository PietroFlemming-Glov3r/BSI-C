#include "esfera.h"

int main()
{
    /*Criando a Esfera*/
    Esfera *e;
    e =  cria(7.1);
    
    /*Definindo variáveis*/
    double er, ernovo, earea, evolume;
    
    /*Testes do sistema*/
    
    acessa(e, &er);
    printf("Valor do Raio Inicial :%.1lf\n", er);
    
    atribui (e, 9.7);
    
    raio (e, &ernovo);
    printf("Valor do Raio Final :%.1lf\n", ernovo);
    
    area (e, &earea);
    printf("Valor da Área :%.1lf\n", earea);
    
    volume (e, &evolume);
    printf("Valor do volume :%.1lf\n", evolume);
    
}