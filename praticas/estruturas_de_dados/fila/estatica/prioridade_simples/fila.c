#include "fila.h"

void inicia(FilaPrioridade *L){
    L->fim = 0;
};

int enfilera(FilaPrioridade *L, ITEM x){
    if(cheia(L)) return false;
    L->lista[L->fim] = x;
    L->fim++;
    return true;
};

ITEM desenfilera(FilaPrioridade *L){
    ITEM item = L->lista[0];
    int indice_item = 0;
    for(int i = 1;i<L->fim;i++){
        if(item < L->lista[i]){
            item = L->lista[i];
            indice_item = i;
        }
    }

    for(; indice_item < L->fim; indice_item++){
        L->lista[indice_item] = L->lista[indice_item+1];
    }
    L->fim--;

    return item;
};


int vazia(FilaPrioridade *L){
    if(L->fim != 0) return false; 
    printf("Lista vazia");
    return true;
};

int cheia(FilaPrioridade *L){
    if(L->fim != MAXTAM) return false; 
    printf("Lista cheia");
    return true;
};

void mostra(FilaPrioridade L){
    printf("[ ");
    for(int i=0;i<L.fim;i++){
        printf("%d, ",L.lista[i]);
    }
    printf(" ]\n");
}
