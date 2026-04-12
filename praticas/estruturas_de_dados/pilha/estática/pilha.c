#include "pilha.h"

void inicia(PilhaEstatica *L){
    L->comeco = 0;
    L->fim = 0;
};

int empilha(PilhaEstatica *L, ITEM x){
    if(cheia(L)) return false;
    L->lista[L->fim] = x;
    L->fim++;
    return true;
};

ITEM desempilha(PilhaEstatica *L){
    ITEM item = L->lista[L->fim];
    L->fim--;
    return item;
};


int vazia(PilhaEstatica *L){
    if(L->comeco != L->fim) return false; 
    printf("Lista vazia");
    return true;
};

int cheia(PilhaEstatica *L){
    if(L->fim != MAXTAM) return false; 
    printf("Lista cheia");
    return true;
};

void mostra(PilhaEstatica L){
    printf("[ ");
    for(int i=L.comeco;i<L.fim;i++){
        printf("%d, ",L.lista[i]);
    }
    printf(" ]\n");
}
