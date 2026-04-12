#include "fila.h"

void inicia(FilaEstatica *L){
    L->comeco = 0;
    L->fim = 0;
};

int enfilera(FilaEstatica *L, ITEM x){
    if(cheia(L)) return false;
    L->lista[L->fim] = x;
    L->fim++;
    return true;
};

ITEM desenfilera(FilaEstatica *L){
    ITEM item = L->lista[L->comeco];
    L->comeco++;
    return item;
};


int vazia(FilaEstatica *L){
    if(L->comeco != L->fim) return false; 
    printf("Lista vazia");
    return true;
};

int cheia(FilaEstatica *L){
    if(L->fim != MAXTAM) return false; 
    printf("Lista cheia");
    return true;
};

void mostra(FilaEstatica L){
    printf("[ ");
    for(int i=L.comeco;i<L.fim;i++){
        printf("%d, ",L.lista[i]);
    }
    printf(" ]\n");
}
