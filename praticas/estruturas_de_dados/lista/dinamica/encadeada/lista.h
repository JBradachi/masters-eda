#include <stdio.h>
#include <stdlib.h>

#define ITEM int

typedef struct Celula{
    ITEM valor;
    struct Celula* proximo;
    struct Celula* anterior;

}Celula;

typedef struct ListaEncadeada{
    Celula *head;
    int tamanho;
}ListaEncadeada;


void inicia(ListaEncadeada *L);
int insere(ListaEncadeada *L, ITEM x);
ITEM remove_item(ListaEncadeada *L, ITEM x);
ITEM remove_index(ListaEncadeada *L, int x);
int encontra_indice(ListaEncadeada *L, ITEM x);
ITEM encontra_item(ListaEncadeada *L, ITEM x);
int vazia(ListaEncadeada *L);
void mostra(ListaEncadeada L);

