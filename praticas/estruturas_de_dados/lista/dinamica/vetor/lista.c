#include "lista.h"

int inicia(ListaDinamica *L){
    L->quantidade = 0;
    L->maxtam = INITTAM;
    L->lista = (ITEM*)malloc(sizeof(ITEM)*L->maxtam);
};

int insere(ListaDinamica *L, ITEM x){
    if(cheia(L)) return false;
    L->lista[L->quantidade] = x;
    L->quantidade++;
    return true;
};

ITEM remove_item(ListaDinamica *L, ITEM x){
    int indice = encontra_indice(L, x);
    if(indice == ERRO){
        return -1;
    }
    return remove_index(L, indice);
};

ITEM remove_index(ListaDinamica *L, int indice){
    ITEM item = L->lista[indice];
    for(int i = indice; i<L->quantidade; i++){
        L->lista[i] = L->lista[i+1];
    }
    L->quantidade--;
    return item;
};

int encontra_indice(ListaDinamica *L, ITEM x){
    if(vazia(L)) return ERRO;
    for(int i = 0; i<L->quantidade; i++){
        if(L->lista[i] == x) return i;
    }
    printf("Não existe item %d", x);
    return ERRO;
};

ITEM encontra_item(ListaDinamica *L, ITEM x){
    int indice = encontra_indice(L, x);
    if(indice == ERRO){
        return -1;
    }
    return L->lista[indice];
};

ITEM encontra_item_indice(ListaDinamica *L, int indice){
    if(indice < L->quantidade && indice<=0){
        return L->lista[indice];
    }
    return -1;
};

int vazia(ListaDinamica *L){
    if(L->quantidade != 0) return false; 
    printf("Lista vazia");
    return true;
};

int cheia(ListaDinamica *L){
    if(L->quantidade == L->maxtam){
    printf("Lista cheia, alocando mais memória\n");
    dobra_vetor(L);
    }
    
    return false; 
};

void dobra_vetor(ListaDinamica *L){ // dava pra usar realloc
    
    ITEM *novo_vetor;
    L->maxtam *= 2;
    novo_vetor = (ITEM*)malloc(sizeof(ITEM)*L->maxtam);;

    for(int i = 0; i<L->quantidade; i++){
        novo_vetor[i] = L->lista[i];
    }
    free(L->lista);
    L->lista = novo_vetor;
    
}

void mostra(ListaDinamica L){
    printf("[ ");
    for(int i=0;i<L.quantidade;i++){
        printf("%d, ",L.lista[i]);
    }
    printf(" ]\n");
    printf("tamanho: %d\n", L.maxtam);
}
