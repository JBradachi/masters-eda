#include "fila.h"

#define INDICE(a) (a+1)%MAXTAM

void inicia(FilaEstaticaCircular *L){
    L->comeco = 0;
    L->fim = -1;
    L->tamanho = 0;
};

int enfilera(FilaEstaticaCircular *L, ITEM x){
    if(cheia(L)) return false;

    L->fim = INDICE(L->fim);
    // printf("L->fim %d\n", L->fim);
    L->lista[L->fim] = x;
    L->tamanho++;

    return true;
};

ITEM desenfilera(FilaEstaticaCircular *L){
    if(vazia(L)) return false;

    ITEM item = L->lista[L->comeco];
    L->comeco = INDICE(L->comeco);
    L->tamanho--;

    return item;
};


int vazia(FilaEstaticaCircular *L){
    if(L->tamanho != 0) return false; 
    
    printf("Lista vazia\n");
    return true;
};

int cheia(FilaEstaticaCircular *L){
    if(L->tamanho != MAXTAM) return false; 
    printf("Lista cheia\n");
    return true;
};

void mostra(FilaEstaticaCircular L){
    printf("[ ");
    for(int i=L.comeco; i<L.tamanho+L.comeco; i++){
        printf("%d, ",L.lista[INDICE(i-1)]);
    }
    printf(" ]\n");
}
