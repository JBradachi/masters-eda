#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

    FilaPrioridade fila;
    inicia(&fila);

    enfilera(&fila, 12);
    mostra(fila);
    enfilera(&fila, 12);
    mostra(fila);
    enfilera(&fila, 22);
    mostra(fila);
    enfilera(&fila, 13);
    mostra(fila);
    enfilera(&fila, 12);
    mostra(fila);
    enfilera(&fila, 13);
    mostra(fila);
    
    desenfilera(&fila);
    mostra(fila);
    desenfilera(&fila);
    mostra(fila);
    desenfilera(&fila);
    mostra(fila);
    desenfilera(&fila);
    mostra(fila);
    return 0;
}