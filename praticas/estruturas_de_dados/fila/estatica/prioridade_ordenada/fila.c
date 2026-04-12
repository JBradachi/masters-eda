#include "fila.h"

void inicia(PrioridadeOrdenada *L){
    L->fim = 0;
};

int enfilera(PrioridadeOrdenada *L, ITEM x){
    if(cheia(L)) return false;
    
    // encontrar o lugar
    int esquerda = 0;
    int direita = L->fim;

    int meio;
    while (esquerda <= direita) {
        meio = esquerda + (direita - esquerda) / 2;

        if (L->lista[meio] == x) {
            break; // Encontrou de mesma prioridade.
        }

        if (L->lista[meio] < x) { // maior prioriodade
            esquerda = meio + 1; 
        }
        
        else { // menor prioridade
            direita = meio - 1;
        }
    }
    
    // arrumar
    L->fim++;
    for(int i = L->fim; i>meio;i--){
        L->lista[i] = L->lista[i-1];
    }

    // alocar
    L->lista[meio] = x;
    
    return true;
};

ITEM desenfilera(PrioridadeOrdenada *L){
    ITEM item = L->lista[L->fim];
    L->fim--;
    return item;
};


int vazia(PrioridadeOrdenada *L){
    if(L->fim != 0) return false; 
    printf("Lista vazia");
    return true;
};

int cheia(PrioridadeOrdenada *L){
    if(L->fim != MAXTAM) return false; 
    printf("Lista cheia");
    return true;
};

void mostra(PrioridadeOrdenada L){
    printf("[ ");
    for(int i=0;i<L.fim;i++){
        printf("%d, ",L.lista[i]);
    }
    printf(" ]\n");
}
