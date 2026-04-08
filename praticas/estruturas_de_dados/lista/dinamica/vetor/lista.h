#include <stdio.h>
#include <stdlib.h>

#define ITEM int
#define ERRO -1

#define INITTAM 5

#define true 1
#define false 0


typedef struct ListaDinamica{
    ITEM *lista;
    ITEM quantidade;
    ITEM maxtam;
}ListaDinamica;

int inicia(ListaDinamica *L);
int insere(ListaDinamica *L, ITEM x);
ITEM remove_item(ListaDinamica *L, ITEM x);
ITEM remove_index(ListaDinamica *L, int x);
int encontra_indice(ListaDinamica *L, ITEM x);
ITEM encontra_item(ListaDinamica *L, ITEM x);
int vazia(ListaDinamica *L);
int cheia(ListaDinamica *L);
void mostra(ListaDinamica L);
void dobra_vetor(ListaDinamica *L);


