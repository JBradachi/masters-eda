#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

int main(){

    Deque deque;

    inicia(&deque);
    mostra(deque);

    insere_frente(&deque, 12);
    mostra(deque);
    insere_frente(&deque, 13);
    mostra(deque);
    insere_frente(&deque, 13);
    mostra(deque);
    insere_tras(&deque, 14);
    mostra(deque);
    insere_tras(&deque, 14);
    mostra(deque);
    
    // erro
    insere_tras(&deque, 14);
    mostra(deque);
    
    retira_frente(&deque);
    mostra(deque);
    retira_tras(&deque);
    mostra(deque);
    retira_tras(&deque);
    mostra(deque);
    retira_tras(&deque);
    mostra(deque);
    retira_tras(&deque);
    mostra(deque);
    retira_tras(&deque);
    mostra(deque);

    insere_tras(&deque, 14);
    mostra(deque);

    return 0;
}