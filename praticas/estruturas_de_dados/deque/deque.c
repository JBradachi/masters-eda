#include "deque.h"

#define AVANCA(a) (a+1)%MAXTAM
#define VOLTA(a) a-1 < 0 ? MAXTAM-1 : a-1

void inicia(Deque *L){
    L->comeco = 0;
    L->fim = -1;
    L->tamanho = 0;
};

int insere_tras(Deque *L, ITEM x){
    if(cheia(L)) return false;

    L->fim = AVANCA(L->fim);
    L->lista[L->fim] = x;
    L->tamanho++;

    return true;
};

int insere_frente(Deque *L, ITEM x){
    if(cheia(L)) return false;

    L->comeco = VOLTA(L->comeco);
    L->lista[L->comeco] = x;
    L->tamanho++;

    return true;
};

ITEM retira_tras(Deque *L){
    if(vazia(L)) return false;

    ITEM item = L->lista[L->fim];
    L->fim = VOLTA(L->fim);
    L->tamanho--;

    return item;
};

ITEM retira_frente(Deque *L){
    if(vazia(L)) return false;

    ITEM item = L->lista[L->comeco];
    L->comeco = AVANCA(L->comeco);
    L->tamanho--;

    return item;
};


int vazia(Deque *L){
    if(L->tamanho != 0) return false; 
    
    printf("Lista vazia\n");
    return true;
};

int cheia(Deque *L){
    if(L->tamanho != MAXTAM) return false; 
    printf("Lista cheia\n");
    return true;
};

void mostra(Deque L){
    printf("[ ");
    for(int i=L.comeco; i<L.tamanho+L.comeco; i++){
        printf("%d, ",L.lista[AVANCA(i-1)]);
    }
    printf(" ]\n");

    // printf("DEBUG [ ");
    // for(int i=0; i<MAXTAM; i++){
    //     printf("%d, ",L.lista[i]);
    // }
    // printf(" ]\n");
}
