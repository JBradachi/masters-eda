#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 5
#define ITEM int
#define ERRO -1

#define true 1
#define false 0


typedef struct Deque{
    ITEM lista[MAXTAM];
    int comeco;
    int fim;
    int tamanho;
}Deque;

void inicia(Deque *L);
int insere_frente(Deque *L, ITEM x);
int insere_tras(Deque *L, ITEM x);
ITEM retira_frente(Deque *L);
ITEM retira_tras(Deque *L);
int vazia(Deque *L);
int cheia(Deque *L);
void mostra(Deque L);



