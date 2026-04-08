#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 1000
#define ITEM int
#define ERRO -1

#define true 1
#define false 0


typedef struct ListaEstatica{
    ITEM lista[MAXTAM];
    ITEM quantidade;
}ListaEstatica;

int inicia(ListaEstatica *L);
int insere(ListaEstatica *L, ITEM x);
ITEM remove_item(ListaEstatica *L, ITEM x);
ITEM remove_index(ListaEstatica *L, int x);
int encontra_indice(ListaEstatica *L, ITEM x);
ITEM encontra_item(ListaEstatica *L, ITEM x);
int vazia(ListaEstatica *L);
int cheia(ListaEstatica *L);
void mostra(ListaEstatica L);



