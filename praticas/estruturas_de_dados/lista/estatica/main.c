#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    ListaEstatica lista;
    inicia(&lista);

    insere(&lista, 12);
    mostra(lista);
    insere(&lista, 12);
    mostra(lista);
    insere(&lista, 13);
    mostra(lista);
    insere(&lista, 12);
    mostra(lista);
    insere(&lista, 13);
    mostra(lista);
    
    remove_item(&lista, 13);
    mostra(lista);
    remove_index(&lista, 1);
    mostra(lista);
    return 0;
}