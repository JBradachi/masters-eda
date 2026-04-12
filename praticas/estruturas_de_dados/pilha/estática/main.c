#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    PilhaEstatica pilha;
    inicia(&pilha);

    empilha(&pilha, 12);
    mostra(pilha);
    empilha(&pilha, 12);
    mostra(pilha);
    empilha(&pilha, 12);
    mostra(pilha);
    empilha(&pilha, 13);
    mostra(pilha);
    empilha(&pilha, 12);
    mostra(pilha);
    empilha(&pilha, 13);
    mostra(pilha);
    
    desempilha(&pilha);
    mostra(pilha);
    desempilha(&pilha);
    mostra(pilha);
    return 0;
}