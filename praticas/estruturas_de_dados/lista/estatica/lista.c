#include "lista.h"

int inicia(ListaEstatica *L){
    L->quantidade = 0;
};

int insere(ListaEstatica *L, ITEM x){
    if(cheia(L)) return false;
    L->lista[L->quantidade] = x;
    L->quantidade++;
    return true;
};

ITEM remove_item(ListaEstatica *L, ITEM x){
    int indice = encontra_indice(L, x);
    if(indice == ERRO){
        return -1;
    }
    return remove_index(L, indice);
};

ITEM remove_index(ListaEstatica *L, int indice){
    ITEM item = L->lista[indice];
    for(int i = indice; i<L->quantidade; i++){
        L->lista[i] = L->lista[i+1];
    }
    L->quantidade--;
    return item;
};

int encontra_indice(ListaEstatica *L, ITEM x){
    if(vazia(L)) return ERRO;
    for(int i = 0; i<L->quantidade; i++){
        if(L->lista[i] == x) return i;
    }
    printf("Não existe item %d", x);
    return ERRO;
};

ITEM encontra_item(ListaEstatica *L, ITEM x){
    int indice = encontra_indice(L, x);
    if(indice == ERRO){
        return -1;
    }
    return L->lista[indice];
};

ITEM encontra_item_indice(ListaEstatica *L, int indice){
    if(indice < L->quantidade && indice<=0){
        return L->lista[indice];
    }
    return -1;
};

int vazia(ListaEstatica *L){
    if(L->quantidade != 0) return false; 
    printf("Lista vazia");
    return true;
};

int cheia(ListaEstatica *L){
    if(L->quantidade != MAXTAM) return false; 
    printf("Lista cheia");
    return true;
};

void mostra(ListaEstatica L){
    printf("[ ");
    for(int i=0;i<L.quantidade;i++){
        printf("%d, ",L.lista[i]);
    }
    printf(" ]\n");
}
