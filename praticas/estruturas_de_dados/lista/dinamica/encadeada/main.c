#include "lista.h"

int main(){
    ListaEncadeada L;
    inicia(&L);
    
    mostra(L);
    insere(&L, 12);
    mostra(L);
    insere(&L, 12);
    mostra(L);
    insere(&L, 12);
    mostra(L);
    insere(&L, 13);
    mostra(L);
    insere(&L, 12);
    mostra(L);
    insere(&L, 13);
    mostra(L);

    remove_item(&L, 13);
    mostra(L);
    remove_index(&L, 0);
    mostra(L);

    return 0;
}