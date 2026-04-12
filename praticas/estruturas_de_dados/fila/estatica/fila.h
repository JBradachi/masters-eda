#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 1000
#define ITEM int
#define ERRO -1

#define true 1
#define false 0


typedef struct FilaEstatica{
    ITEM lista[MAXTAM];
    int comeco;
    int fim;
}FilaEstatica;

void inicia(FilaEstatica *L);
int enfilera(FilaEstatica *L, ITEM x);
ITEM desenfilera(FilaEstatica *L);
int vazia(FilaEstatica *L);
int cheia(FilaEstatica *L);
void mostra(FilaEstatica L);



