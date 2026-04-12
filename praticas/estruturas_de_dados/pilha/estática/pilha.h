#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 1000
#define ITEM int
#define ERRO -1

#define true 1
#define false 0


typedef struct PilhaEstatica{
    ITEM lista[MAXTAM];
    int comeco;
    int fim;
}PilhaEstatica;

void inicia(PilhaEstatica *P);
int empilha(PilhaEstatica *P, ITEM x);
ITEM desempilha(PilhaEstatica *P);
int vazia(PilhaEstatica *P);
int cheia(PilhaEstatica *P);
void mostra(PilhaEstatica P);



