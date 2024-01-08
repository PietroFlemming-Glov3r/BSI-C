#include "lista_enc_dup.h"

ListaDupla* inicializa(){
    return NULL;
}

ListaDupla* insere(ListaDupla* l, int v){
    ListaDupla* novo = (ListaDupla*)malloc(sizeof(ListaDupla));
    if(novo == NULL){
        exit(1);
    }
    
    novo -> info = v;
    novo -> ant = NULL;
    novo -> prox = l;
    
    if(l != NULL){
        l -> ant = novo;
    }
    return l;
}

ListaDupla* busca(ListaDupla* l, int v){
    ListaDupla* p;
    for(p = l ; p != NULL ; p -> prox){
        if(p -> info == v){
            return p;
        }
    }
    return NULL;
}

ListaDupla* retira(ListaDupla* l, int v){
    ListaDupla* p = busca(l, v);
    if(p = NULL){
        return l;
    }
    if(p == l){
        l = p -> prox;
    }
    else{
        p -> ant -> prox = p -> prox;
    }
    if(p -> prox != NULL){
        p -> prox -> ant = p -> ant;
    }
    free(p);
    return l;
}
