#include "lista_seq.h"

void criar(tlista *l){
    l -> n = 0;
}

void exibir(tlista l){
    for(int i = 0 ; i < l.n ; i++){
        printf("%d ",l.v[i]);
    }
    printf("\n");
}

int vazia(tlista l){
    return l.n = 0;
}

int cheia(tlista l){
    return l.n == MAX;
}

int tamanho(tlista l){
    return l.n;
}

int elemento(tlista l, int pos, int*dado){
    if(pos < 0 || pos >= l.n){
        return 0;
    }
    (*dado) = l.v[pos];
    return 1;
}

int posicao(tlista l, int dado){
    for(int i = 0 ; i < l.n ; i++){
        if(dado == l.v[i]){
            return i;
        }
    return -1;
    }
}

int insere_final(tlista *l, int dado){
    if(cheia(*l)){
        return 0;
    }
    l -> v[l -> n] = dado;
    l -> n += 1;
    return 1;
}

int remover(tlista *l, int pos, int *dado){
    if(pos < 0 || pos >= (l -> n)){
        return 0;
    }
    for(int i = pos ; i < (l -> n) - 1; i++){
        l -> v[i] = l -> v[i+1];
        l -> n -= 1;
    }
    return 1;
}

int set_elemento(tlista *l, int pos, int dado){
    if(pos < 0 || pos >= (l -> n)){
        return 0;
    }
    l -> v[pos] = dado;
    return 1;
}

void esvaziar(tlista *l){
    l -> n = 0;
}