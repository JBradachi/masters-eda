#include "lista.h"

void inicia(ListaEncadeada *L){
    L->tamanho = 0;
    L->head = NULL;
};

int insere(ListaEncadeada *L, ITEM x){
    Celula *novo_no = (Celula*)malloc(sizeof(Celula));
    Celula *procura_final = L->head;

    novo_no->valor = x;
    novo_no->proximo = NULL;
    
    if(L->head == NULL){ // primeira inserção
        novo_no->anterior = NULL;
        L->head = novo_no;
    }
    else{
        while (procura_final->proximo != NULL){
            procura_final = procura_final->proximo;
        }
        
        novo_no->anterior = procura_final;
        procura_final->proximo = novo_no;
    }
    
    L->tamanho++;
    
    return 0;
};

ITEM remove_item(ListaEncadeada *L, ITEM x){
    Celula* busca_item = L->head;
    ITEM removido;

    while(busca_item != NULL && busca_item->valor != x){
        busca_item = busca_item->proximo;
    }

    if(busca_item == NULL){
        printf("item não existe");
        return -1;
    }

    removido = busca_item->valor;

    if(busca_item->anterior != NULL){
        busca_item->anterior->proximo = busca_item->proximo;
        
    }else{
        // primeiro da lista
        L->head = busca_item->proximo;
    }

    if (busca_item->proximo != NULL){
        // não é o ultimo da lista
        busca_item->proximo->anterior = busca_item->anterior;
    }

    free(busca_item);
    L->tamanho--;
    return removido;
};

ITEM remove_index(ListaEncadeada *L, int x){
    Celula* busca_index = L->head;
    ITEM removido;

    if(x>L->tamanho){
        printf("Erro, indice maior que a lista");
        return -1;
    }

    for(int i = 0; i<=x; i++){
        busca_index = busca_index->proximo;
    }

    removido = busca_index->valor;
    
    if(busca_index->anterior != NULL){
        busca_index->anterior->proximo = busca_index->proximo;
        
    }else{
        // primeiro da lista
        L->head = busca_index->proximo;
    }

    if (busca_index->proximo != NULL){
        // não é o ultimo da lista
        busca_index->proximo->anterior = busca_index->anterior;
    }
    
    free(busca_index);
    
    L->tamanho--;
    return removido;

};

int encontra_indice(ListaEncadeada *L, ITEM x){
    Celula* busca_item = L->head;
    int indice = -1;

    while(busca_item != NULL && busca_item->valor != x){
        busca_item = busca_item->proximo;
        indice++;
    }

    if(busca_item==NULL){
        printf("item não encontrado");
        return -1;
    }

    return indice;
};

ITEM encontra_item(ListaEncadeada *L, ITEM x){
    Celula* busca_item = L->head;
    while(busca_item != NULL && busca_item->valor != x){
        busca_item = busca_item->proximo;
    }

    if(busca_item==NULL){
        printf("item não encontrado");
        return -1;
    }

    return x;
};

int vazia(ListaEncadeada *L){
    if(L->tamanho == 0){
        return 1;
    }
    return 0;
};

void mostra(ListaEncadeada L){
    Celula* percorre = L.head;
    printf("[ ");
    while(percorre != NULL){
        printf("%d, ", percorre->valor);
        percorre = percorre->proximo;
    }
    printf(" ]\n");
};