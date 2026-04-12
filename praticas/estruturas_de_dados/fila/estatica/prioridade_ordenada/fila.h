#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 1000
#define ITEM int
#define ERRO -1

#define true 1
#define false 0


typedef struct PrioridadeOrdenada{
    ITEM lista[MAXTAM];
    int fim;
}PrioridadeOrdenada;

void inicia(PrioridadeOrdenada *L);
int enfilera(PrioridadeOrdenada *L, ITEM x);
ITEM desenfilera(PrioridadeOrdenada *L);
int vazia(PrioridadeOrdenada *L);
int cheia(PrioridadeOrdenada *L);
void mostra(PrioridadeOrdenada L);



