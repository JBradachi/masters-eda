#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 1000
#define ITEM int
#define ERRO -1

#define true 1
#define false 0


typedef struct FilaPrioridade{
    ITEM lista[MAXTAM];
    int fim;
}FilaPrioridade;

void inicia(FilaPrioridade *L);
int enfilera(FilaPrioridade *L, ITEM x);
ITEM desenfilera(FilaPrioridade *L);
int vazia(FilaPrioridade *L);
int cheia(FilaPrioridade *L);
void mostra(FilaPrioridade L);



